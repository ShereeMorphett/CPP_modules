/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:09:06 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/30 17:28:23 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "BZZZZZZZ" << std::endl;
	if ((rand() % 10) > 5)
		std::cout << getName() <<" has been robotomized" << std::endl;
	
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 75, 45)
{	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
	if (getGradeToExecute() < 1 || getGradeToExecute()  > 150)
		throw GradeTooHighException();
	if (getGradeToSign() < 1 || getGradeToSign() > 150)
		throw GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(){}


RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & right ) 
{

	return *this;
}
