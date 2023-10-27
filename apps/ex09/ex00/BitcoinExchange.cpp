/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/27 11:18:38 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


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