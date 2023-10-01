/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:32:57 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/01 17:16:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern&) {}
Intern::~Intern() {}

Intern& Intern::operator=(const Intern&)
{
    return *this;
}

AForm* Intern::makeShrubberyCreation(const std::string& target) const
{
    AForm* form = new ShrubberyCreationForm(target);
    return form;
}

AForm* Intern::makeRobotomyRequest(const std::string& target) const
{
    AForm* form = new RobotomyRequestForm(target);
    return form;
}

AForm* Intern::makePresidentialPardon(const std::string& target) const
{
    AForm* form = new PresidentialPardonForm(target);
    return form;
}

AForm* Intern::makeForm(const std::string& form, const std::string& target) const
{
    std::string formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*funcList[3])(const std::string&) const = \
        {&Intern::makeShrubberyCreation, \
        &Intern::makeRobotomyRequest, \
        &Intern::makePresidentialPardon};

    AForm* ret = NULL;
    for (int i = 0; i < 3; ++i)
    {
        if (form == formList[i])
        {
            ret = (this->*funcList[i])(target);
            return ret;
        }
    }
    std::cerr << "There is no AForm with that name: " << form << std::endl;
    return NULL;
}
