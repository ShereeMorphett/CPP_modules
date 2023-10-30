/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:01 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/30 11:50:35 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
# define BitcoinExchange_HPP

# include <iostream>
# include <map>
# include <string>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double> data_;
	public:
		void parseInitData();
		void handleInput(std::string fileName);
		BitcoinExchange ();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();
		BitcoinExchange &	operator=( BitcoinExchange const & right);

	class FileError : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class InvalidInput : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};


#endif