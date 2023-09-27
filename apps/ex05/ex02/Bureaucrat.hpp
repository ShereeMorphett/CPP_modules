/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:25:46 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/27 15:03:28 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
# include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string name_;
		int grade_; // 1 (highest) to 150 (lowest).
	public:
		std::string getName();
		int getGrade();
		int setGrade(int grade);
		void signForm(Form &form);
		void increaseGrade();
		void decreaseGrade();
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