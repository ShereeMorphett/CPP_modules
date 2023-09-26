/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:19:29 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 14:00:18 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP
# include <iostream>
#include "Bureaucrat.hpp"
/*
Add also a beSigned() member function to the Form that takes a Bureaucrat as parameter. It changes the form status to signed if the bureaucrat’s grade is high enough (higher or egal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException.
Lastly, add a signForm() member function to the Bureaucrat. If the form got signed, it will print something like:
   <bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.

*/


class Form
{
	private:
		const std::string name_;
		bool signed_;
		const int gradeToSign_;
		const int gradeToExecute_;	
	
	public:	
		std::string beSigned(Bureaucrat bureaucrat);
		std::string getName();
		int getGradeToSign();
		int getGradeToExecute();
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

		Form &	operator=( Form const & right);
		Form(std::string name, int toSign, int toExecute);
		Form(Form const & src);
		~Form();
};

std::ostream& operator<<(std::ostream& out, Form& Form);



#endif