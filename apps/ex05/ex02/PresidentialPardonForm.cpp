/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:09:06 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/30 17:23:23 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 25, 5)
{	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): AForm(src)
{
	if (getGradeToExecute() < 1 || getGradeToExecute()  > 150)
		throw GradeTooHighException();
	if (getGradeToSign() < 1 || getGradeToSign() > 150)
		throw GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(){}


PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & right ) 
{

	return *this;
}
