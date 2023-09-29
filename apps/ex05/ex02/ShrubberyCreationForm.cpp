/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:23 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/29 16:24:28 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>



void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout << "one day this will print out ascii trees XD" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137)
{	
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	if (getGradeToExecute() < 1 || getGradeToExecute()  > 150)
		throw GradeTooHighException();
	if (getGradeToSign() < 1 || getGradeToSign() > 150)
		throw GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & right ) 
{

	return *this;
}

