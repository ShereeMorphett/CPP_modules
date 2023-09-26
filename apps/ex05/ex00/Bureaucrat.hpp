/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:25:46 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 13:11:20 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
# include <iostream>

/* 
	Please note that exception classes don’t have to be designed in Orthodox Canonical Form.
	But every other class has to.
	First, start by the smallest cog in this vast bureaucratic machine: the Bureaucrat.
	A Bureaucrat must have:
	• A constant name.
	• And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
	grade).
	Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
	either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
*/


class Bureaucrat
{
	private:
		const std::string name_;
		int grade_; // 1 (highest) to 150 (lowest).
	public:
		std::string getName();
		int getGrade();
		Bureaucrat &	operator=( Bureaucrat const & right);
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};


std::ostream& operator<<(std::ostream& out, Bureaucrat& Bureaucrat);




#endif