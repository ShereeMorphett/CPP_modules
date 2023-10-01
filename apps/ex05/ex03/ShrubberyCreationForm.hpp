/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:23 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/01 17:23:48 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"


/*
	Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.*/

class ShrubberyCreationForm : public AForm
{
	private:
		static std::string const shrubs_[3];
		
	public:
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & right);
		class TargetFileOpenException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class WriteErrorException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};


#endif