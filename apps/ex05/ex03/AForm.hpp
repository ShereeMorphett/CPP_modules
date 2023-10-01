/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:19:29 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/29 15:32:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP
# include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string name_;
		bool signed_;
		const int gradeToSign_;
		const int gradeToExecute_;


	
	public:	
		bool getSigned() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		void beSigned(Bureaucrat bureaucrat);
		virtual std::string getName() const;
		virtual int getGradeToSign() const;
		virtual int getGradeToExecute() const;
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

		class TooManySignitures : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		AForm &	operator=( AForm const & right);
		// AForm();
		AForm(std::string name, int toSign, int toExecute);
		AForm(AForm const & src);
		virtual ~AForm();
};

std::ostream& operator<<(std::ostream& out, AForm& AForm);



#endif