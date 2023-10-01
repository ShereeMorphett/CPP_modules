/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:32:53 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/01 17:21:06 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern&);
    ~Intern();

    Intern& operator=(const Intern&);

    AForm* makeShrubberyCreation(const std::string& target) const;
    AForm* makeRobotomyRequest(const std::string& target) const;
    AForm* makePresidentialPardon(const std::string& target) const;
    AForm* makeForm(const std::string& form, const std::string& target) const;
};

#endif