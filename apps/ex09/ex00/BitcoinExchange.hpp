/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:55:01 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/27 14:18:17 by smorphet         ###   ########.fr       */
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
		BitcoinExchange ();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();

	class FileError : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
		//BitcoinExchange &	operator=( BitcoinExchange const & right);

};


#endif