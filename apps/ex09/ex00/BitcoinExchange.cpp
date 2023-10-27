/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/27 14:19:40 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



void BitcoinExchange::parseInitData()
{
    std::string fileName = "/Users/smorphet/Desktop/libft_CPP/apps/ex09/ex00/data.csv";
    std::ifstream file(fileName);
    std::string line;

    if (file.fail())
        throw std::runtime_error("File open error");
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
	    for (std::map<std::string, double>::const_iterator it = data_.begin(); it != data_.end(); ++it)
        {
            std::cout << "Date: " << it->first << "		Value: " << it->second << std::endl;
        }

    file.close();
}

const char* BitcoinExchange::FileError::what() const throw()
{
	return "Error reading the File";
}

// BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & right )
// {
// 	if( this != &right )
// 		_ATRIBUTE = right.ATTRIBUTE;
// 	return (this);
// }

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
	*this = src; 
}

BitcoinExchange::~BitcoinExchange()
{}