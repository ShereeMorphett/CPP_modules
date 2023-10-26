/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/26 11:05:48 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"




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