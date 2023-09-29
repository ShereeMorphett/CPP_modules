/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:23 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/29 16:13:13 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


/*
	Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.*/

class ShrubberyCreationForm : public AForm
{
	public:
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & right);
};