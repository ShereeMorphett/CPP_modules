/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:02:32 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/11 13:02:38 by smorphet         ###   ########.fr       */
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
		static int		intValue_;
		static float	fltValue_;
		static char		charValue_;
		static double	dblValue_;
		static int		type_;
		static bool		isPossible_; 
		static int		isPseudo_; 
		static void		convertToChar();
		static void		convertToInt();
		static void		convertToFlt();
		static void		convertToDbl();
		static void		setType(const std::string &input);
		static bool		isInfOrNan(const std::string& input);
		static void		initialConversion(const std::string &input);

		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const &right);
		
		class invalidType : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		enum e_pseudo_
		{
			NAN, POSINF, NEGINF, NOTPSEUDO
		};
		enum e_type_
		{
			CHAR, INT, FLOAT, DOUBLE, NOTYPE, NANINF
		};

	public:
		static void	convert(const std::string &input);


};

#endif
