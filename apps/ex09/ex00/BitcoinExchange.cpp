/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/30 11:54:03 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


static std::string	trimWs(std::string input)
{
	int start = 0;
    int end = input.length();

    while (start < end && std::isspace(input[start]))
        ++start;
    while (end > start && std::isspace(input[end - 1]))
        --end;

    return input.substr(start, end - start);
}

void BitcoinExchange::parseInitData()
{
    std::string fileName = "/home/sheree/Desktop/libft_CPP/apps/ex09/ex00/data.csv";
    std::ifstream file(fileName);
    std::string line;

    if (file.fail())
        throw std::runtime_error("File open error");
    getline(file, line); //skipping first line
    while (getline(file, line))
    {
        std::istringstream ss(line);
        std::string date;
        double value;

        if (getline(ss, date, ',') && ss >> value)
            data_[date] = value;
        else
            std::cerr << "Error parsing line: " << line << std::endl;
    }
    file.close();
}
static void validateInput(std::string date, float value)
{

    // std::cout << date << "|" << std::endl;
}

static void printConversion(std::string date, float value, std::map<std::string, double> data_)
{
    std::string fixedDate = trimWs(date);
    std::cout << "Value: " << data_[fixedDate] << std::endl;    
    std::cout << fixedDate << "|" << std::endl;
}

/*
	if (date_length != 10 || ss_line.fail() || trash1 != '-' || 
    trash2 != '-' || trash3 != '|' || !ss_line.eof()) {
		throw(BadInputException());
	}
	if (!checkDate(year, month, day)) {
		throw(BadDateException());
	}
	if (value > 1000) {
		throw(ValueTooHighException());
	}
	else if (value < 0) {
		throw(ValueTooLowException());
	}
*/

void BitcoinExchange::handleInput(std::string fileName)
{
    std::ifstream file(fileName);
    std::string line;
	int		year, month, day; // struct?
	float	value;
	char	hyphen, hyphen2, pipe;

    if (file.fail())
        throw std::runtime_error("File open error");
    getline(file, line);
    while (getline(file, line))
    {
        std::istringstream ss(line);
	    ss >> year >> hyphen >> month >> hyphen2 >> day >> pipe >> value;
        if (ss.fail() || hyphen != '-' || hyphen2 != '-' || pipe != '|' || !ss.eof())
		    throw(InvalidInput());
        //check for month day etc all in range check for leap year throw incorrect date error check for future date?
        //validateInput(date, value);
        //printConversion(date, value, data_);
    }
}

 
const char* BitcoinExchange::FileError::what() const throw()
{
	return "Error reading the File";
}

const char* BitcoinExchange::InvalidInput::what() const throw()
{
	return "Invalid input";
}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & right )
{
	if( this != &right )
		data_ = right.data_;
	return *this;
}

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
	*this = src; 
}

BitcoinExchange::~BitcoinExchange()
{}