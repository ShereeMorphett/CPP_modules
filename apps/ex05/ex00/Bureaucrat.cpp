/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:25:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 13:28:54 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& out, Bureaucrat& Bureaucrat)
{
   out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << "." << std::endl;
    return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}



std::string Bureaucrat::getName()
{
	return name_;
}

int Bureaucrat::getGrade()
{
	return grade_;
}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & right)
{
    if (this != &right)
    {
        grade_ = right.grade_;
    }

    return *this;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): name_(name), grade_(grade)
{
	if (grade_ < 1)
		throw GradeTooHighException();
	if (grade_ > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name_(src.name_), grade_(src.grade_)
{
		if (src.grade_ < 1)
			throw GradeTooHighException();
		if (src.grade_ > 150)
			throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{}
