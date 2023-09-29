/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicTests.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:27:38 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/29 16:26:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Color.hpp"


// void testingInteraction(Bureaucrat bureaucrat, AForm form)
// {
// 	bureaucrat.signForm(form);
// 	bureaucrat.setGrade(5);
// 	std::cout << bureaucrat;
// 	bureaucrat.signForm(form);
// 	bureaucrat.signForm(form);
// }



void testingBureaucrat()
{
	Bureaucrat dude("dude", 1);
	std::cout << dude.getName() << std::endl;
	std::cout << "Current grade: " << dude.getGrade() << std::endl;
	std::cout << COLOR_BRIGHT_CYAN << "\nAfter grade increase" << COLOR_RESET << std::endl;
	try
	{
		dude.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "New grade: " << dude.getGrade() << std::endl;
	try
	{
		dude.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "New grade post decrease: " << dude.getGrade() << std::endl;
	dude.setGrade(150);
	std::cout << "\nAfter set grade: " << dude.getGrade() <<  std::endl;
	try
	{
		dude.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<"\nAfter decrease grade: " << dude.getGrade() << std::endl;
	try
	{
		dude.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "New grade post increase: " << dude.getGrade() << std::endl;
	std::cout << dude;
	std::cout << COLOR_BRIGHT_CYAN << "\nCopy constructor testing" << COLOR_RESET << std::endl;
	Bureaucrat dudeCpy(dude);
	std::cout << dudeCpy.getGrade() << std::endl;
	std::cout << dudeCpy.getName() << std::endl;
	std::cout << dudeCpy;
	std::cout << COLOR_BRIGHT_CYAN << "\nDefault constructor testing - try/catch tests" << COLOR_RESET << std::endl;
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