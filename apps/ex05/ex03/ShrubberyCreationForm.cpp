/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:23 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/30 16:59:28 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include<iostream> 
#include <fstream>



std::string const ShrubberyCreationForm::shrubs_[3] = {

	"        _-_ \n"\
	"     /~~   ~~\\ \n"\
	"  /~~         ~~\\ \n"\
	" {               } \n"\
	"  \\  _-     -_  / \n"\
	"    ~  \\ //  ~ \n"\
	" _- -   | | _- _ \n"\
	"   _ -  | |   -_ \n"\
	"       // \\  \n" ,

	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n",
"   oxoxoo    ooxoo \n" 
"  ooxoxo oo  oxoxooo \n" 
 "oooo xxoxoo ooo ooox \n" 
" oxo o oxoxo  xoxxoxo \n" 
"  oxo xooxoooo o ooo \n" 
"    ooo\\oo\\  /o/o \n" 
"        \\  \\/ / \n" 
"         |   / \n" 
"         |  | \n" 
"         | D| \n" 
"         |  | \n" 
"         |  | \n" 
  "______/____\\____ \n"
};


ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	
	std::string shrubName = (getName() + "_shrubbery.txt");
	std::ofstream shrubFile;
	
    shrubFile.open(shrubName, std::ios::app);
	
    if (!shrubFile.is_open())
	{                 
		std::cout << shrubName <<std::endl;
        throw WriteErrorException();
    }
    else
	{
		int seed = rand();
		shrubFile << shrubs_[seed % 3];
		if (shrubFile.bad()) {
			shrubFile << std::endl;
			shrubFile.close();
			throw WriteErrorException();
		}
		if (shrubFile.fail())
		{
			throw WriteErrorException();
		}
		
		shrubFile << std::endl; 
        shrubFile.close();           
    }
	
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137)
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): AForm(src)
{
	if (getGradeToExecute() < 1 || getGradeToExecute()  > 150)
		throw GradeTooHighException();
	if (getGradeToSign() < 1 || getGradeToSign() > 150)
		throw GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}


const char* ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
	return "ShrubberyCreationFormException: Cannot open file";
}

const char* ShrubberyCreationForm::WriteErrorException::what() const throw()
{
	return "ShrubberyCreationFormException: Error while writing to the file";
}
