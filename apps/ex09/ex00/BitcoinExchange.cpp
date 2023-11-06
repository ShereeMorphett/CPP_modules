/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/06 10:37:00 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iterator> 

bool date::operator== (const date& right) const
{
    return year == right.year && month == right.month && day == right.day;
}

bool date::operator!= (const date& right) const
{
    return year == right.year && month == right.month && day == right.day;
}

bool date::operator< (const date& right) const
{
    if (year == right.year)
    {
        if (month == right.month)
        {
            return day < right.day;
        }
        else
            return month < right.month;
    }
    else
        return year < right.year;
}

std::ostream& operator<<( std::ostream& os , const date& right)
{
    os << right.year <<  "-" << right.month << "-" << right.day;
    return os;
}

std::istream& operator>>(std::istream& is , date& right)
{
    char hyphen;
    
    is >> right.year >> hyphen;
    if (!is || hyphen != '-')
    {
        is.setstate(std::ios_base::failbit);
        return is;
    }
    is >> right.month >> hyphen >> right.day;
    if (!is || hyphen != '-')
        is.setstate(std::ios_base::failbit);
   
    return is;
}

void BitcoinExchange::parseInitData()
{
    std::ifstream file("data.csv");
    std::string line;

    if (!file)
        throw std::runtime_error("File open error");
    getline(file, line);
    while (getline(file, line))
    {
        std::stringstream ss(line);
        date key;
        char comma;
        float value;
        
        ss >> key >> comma >> value;
        if (ss && comma == ',' )
            data_[key] = value;
        else
             throw std::logic_error("Error parsing line");
    }
    file.close();
}

static void printConversion(date &userDate, float value, std::map<date, float> data_)
{
    std::map<date, float>::iterator it = data_.begin();
	float convertValue= 0;
	while (it != data_.end())
	{
	    if (it->first < userDate)
		    convertValue = it->second;
        else
            break;
		it++;
	}
    float converted =  value * convertValue;
    std::cout << userDate << " => " << value << " = " <<  converted << std::endl;
}

static int validate(float value)
{
    if (value < 0.00)
        return -1;
    else if (value > 1000)
        return 0;
    else
        return 1; 
}

static bool validate(date &userDate)
{
    int leapYear = 0;

    if (userDate.month < 1 || userDate.month > 12 || userDate.day < 1 || userDate.day > 31)
        return false;
    if ((userDate.year % 4 == 0 && userDate.year % 100 != 0) || userDate.year % 400 == 0)
        leapYear = 1;
    if (userDate.month == 2 && ((!leapYear && userDate.day > 28) || (leapYear && userDate.day > 29)))
        return false;
    if ((userDate.month == 4 || userDate.month == 6 || userDate.month == 11 ) && userDate.month < 30)	
		return false;
    return true;
}

void BitcoinExchange::handleInput(std::string fileName)
{
    std::ifstream file(fileName.c_str());
    std::string line;
    date userDate;
	float value;
    char pipe;

    if (!file)
        throw std::runtime_error("File open error");
    getline(file, line);
    while (getline(file, line))
    {
        try
        {
            std::istringstream ss(line);
			if (line.empty())
				throw std::logic_error("Empty Line");
            ss >> userDate >> pipe >> value;
            if (!ss || !ss.eof())
                throw std::logic_error("Bad input => " + line);
			std::map<date, float>::iterator it = data_.begin();
			if (userDate < it->first)
                throw std::logic_error("Input predates database");			
            switch (validate(value))
            {
                case -1:
                    throw std::logic_error("not a positive number.");
                    break;
                case 0:
                    throw std::logic_error("too large a number.");
                    break;
                case 1:
                    if (!validate(userDate))
                        throw std::logic_error("invalid date");
                    printConversion(userDate, value, data_);
                    break;
                default:
                    throw std::logic_error("invalid input");
                    break;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr <<"Error: " << e.what() << '\n';
        }
    }
}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & right )
{
	if( this != &right )
		data_ = right.data_;
	return *this;
}

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src; 
}

BitcoinExchange::~BitcoinExchange()
{}

