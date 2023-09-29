/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:24:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/29 16:27:12 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Color.hpp"

void testingBureaucrat();





int main()
{
	std::cout << COLOR_GREEN << "Basic Bureaucrat tests\n" << COLOR_RESET << std::endl;
	testingBureaucrat();
	std::cout << COLOR_GREEN << "\nBasic Form tests\n" << COLOR_RESET << std::endl;
	
	return 0;
}