/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:19:55 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 14:11:56 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeToSign_)
	{
		signed_ = true;
		
	}
	else
		throw GradeTooLowException();
}

std::string Form::getName()
{
	return name_;
}

int Form::getGradeToSign()
{
	return gradeToSign_;
}

int Form::getGradeToExecute()
{
	return gradeToExecute_;
}


std::ostream& operator<<(std::ostream& out, Form& Form)
{
	out << Form.getName() << ", Form grade to sign" << Form.getGradeToSign() << ", Form grade to execute" << Form.getGradeToExecute() << std::endl;
    return out;
}


const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

Form&	Form::operator=( Form const & right )
{
	if( this != &right )
    {
        signed_ = right.signed_;
    }
	return *this;
}

Form::Form(std::string name, int toSign, int toExecute): name_(name), signed_(false), gradeToSign_(toSign), gradeToExecute_(toExecute)
{
	if (gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw GradeTooHighException();
	if (gradeToSign_ < 150 || gradeToExecute_ < 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src): name_(src.name_), signed_(src.signed_), gradeToSign_(src.gradeToSign_), gradeToExecute_(src.gradeToExecute_)
{
	if (gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw GradeTooHighException();
	if (gradeToSign_ < 150 || gradeToExecute_ < 150)
		throw GradeTooLowException();
}

Form::~Form()
{}