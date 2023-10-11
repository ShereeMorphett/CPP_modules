/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:02:32 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/11 17:49:40 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <string>
#include <iostream>
#include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const &right);
		

	public:
		static void	convert(const std::string &input);
		class invalidType : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
        

};

#endif
