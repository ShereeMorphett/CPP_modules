/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:24:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 13:16:52 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat dude("dude", 1);
	std::cout << dude.getGrade() << std::endl;
	std::cout << dude.getName() << std::endl;
	std::cout << dude;

	try
	{
		Bureaucrat dudeCpy(dude);
		std::cout << dudeCpy.getGrade() << std::endl;
		std::cout << dudeCpy.getName() << std::endl;
		std::cout << dudeCpy;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(...)
	{
		std::cout << "There was an exception!" << std::endl;
	}
	
	try
	{
		Bureaucrat dudeLow("Low", 151);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(...)
	{
		std::cout << "There was an exception!" << std::endl;
	}
	
	try
	{
		Bureaucrat dudeHigh("High", 0);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(...)
	{
		std::cout << "There was an exception!" << std::endl;
	}
	return 0;
}