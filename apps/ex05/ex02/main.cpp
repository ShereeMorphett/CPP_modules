/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:24:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/27 15:26:21 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Color.hpp"

void testingForm();
void testingBureaucrat();
void testingInteraction(Bureaucrat bureaucrat, Form form);




int main()
{
	std::cout << COLOR_GREEN << "Basic Bureaucrat tests\n" << COLOR_RESET << std::endl;
	testingBureaucrat();
	std::cout << COLOR_GREEN << "\nBasic Form tests\n" << COLOR_RESET << std::endl;
	testingForm();
	Form newForm("the form", 5, 5);
	Bureaucrat dude("dude", 100);
	testingInteraction(dude, newForm);

	return 0;
}