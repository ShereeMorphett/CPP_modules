/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicTests.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:27:38 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 16:34:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Color.hpp"

void testingForm()
{
	try
	{
		Form newForm("A form", 156, 200);
		std::cout << newForm.getGradeToExecute() << std::endl;
		std::cout << newForm.getGradeToSign() << std::endl;
		std::cout << newForm.getName() << std::endl;
		std::cout << newForm;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
		try
	{
		Form newForm("A form", -100, 0);
		std::cout << newForm.getGradeToExecute() << std::endl;
		std::cout << newForm.getGradeToSign() << std::endl;
		std::cout << newForm.getName() << std::endl;
		std::cout << newForm;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form newForm("A form", 50, 10);
		std::cout << newForm.getGradeToExecute() << std::endl;
		std::cout << newForm.getGradeToSign() << std::endl;
		std::cout << newForm.getName() << std::endl;
		std::cout << newForm;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Form form("A form for copy", 50, 10);
	std::cout << form.getGradeToExecute() << std::endl;
	std::cout << form.getGradeToSign() << std::endl;
	std::cout << form.getName() << std::endl;
	std::cout << form;
	Form formCpy(form);
	std::cout << formCpy.getGradeToExecute() << std::endl;
	std::cout << formCpy.getGradeToSign() << std::endl;
	std::cout << formCpy.getName() << std::endl;
	std::cout << formCpy;	
}

void testingBureaucrat()
{
	Bureaucrat dude("dude", 1);
	std::cout << dude.getGrade() << std::endl;
	std::cout << dude.getName() << std::endl;
	std::cout << dude;
	Bureaucrat dudeCpy(dude);
	std::cout << dudeCpy.getGrade() << std::endl;
	std::cout << dudeCpy.getName() << std::endl;
	std::cout << dudeCpy;
	try
	{
		Bureaucrat dudeTooLow("dude", 155);
		std::cout << dudeCpy.getGrade() << std::endl;
		std::cout << dudeCpy.getName() << std::endl;
		std::cout << dudeCpy;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat dudeTooHigh("dude", -100);
		std::cout << dudeCpy.getGrade() << std::endl;
		std::cout << dudeCpy.getName() << std::endl;
		std::cout << dudeCpy;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}