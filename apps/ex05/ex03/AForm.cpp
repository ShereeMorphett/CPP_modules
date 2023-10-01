/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:19:55 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/27 15:06:04 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
	Now, add the execute(Bureaucrat const & executor) const member function to the base form and implement a function to execute the form’s action of the concrete classes. 
	You have to check that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
	Whether you want to check the requirements in every concrete class or in the base class (then call another function to execute the form) is up to you. However, 
	one way is prettier than the other one.
*/


bool AForm::getSigned() const
{
	return signed_;
}

void AForm::beSigned(Bureaucrat bureaucrat)
{	
	if (bureaucrat.getGrade() <= gradeToSign_ && !signed_)
	{
		signed_ = true;
	}
	else
	{
		if (signed_)
			throw TooManySignitures();
		else
			throw GradeTooLowException();
	}

}

std::string AForm::getName() const
{
	return name_;
}

int AForm::getGradeToSign() const
{
	return gradeToSign_;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute_;
}


std::ostream& operator<<(std::ostream& out, AForm& AForm)
{
	out << AForm.getName() << ", AForm grade to sign " << AForm.getGradeToSign() << ", AForm grade to execute " << AForm.getGradeToExecute() << std::endl;
    return out;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
const char* AForm::TooManySignitures::what() const throw()
{
    return "This AForm has been signed already!";
}


AForm&	AForm::operator=( AForm const & right )
{
	if( this != &right )
    {
        signed_ = right.signed_;
    }
	return *this;
}

AForm::AForm(std::string name, int toSign, int toExecute): name_(name), signed_(false), gradeToSign_(toSign), gradeToExecute_(toExecute)
{
	if (gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw GradeTooHighException();
	if (gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const & src): name_(src.name_), signed_(src.signed_), gradeToSign_(src.gradeToSign_), gradeToExecute_(src.gradeToExecute_)
{
	if (gradeToSign_ < 1 || gradeToExecute_ > 150)
		throw GradeTooHighException();
	if (gradeToSign_ < 1 || gradeToExecute_ > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{}