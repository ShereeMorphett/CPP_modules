/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:30:50 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/17 14:24:31 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

const std::string& Brain::getIdeas(int index) const
{
    if (index >= 0 && index < 100)
    {
        return ideas_[index];
    }
    return ideas_[0];
}

void Brain::setIdeas(int index, const std::string& str)
{
    if (index >= 0 && index < 100)
    {
        ideas_[index] = str;
    }
    else
        std::cout << "doesnt work" << std::endl;
}

Brain& Brain::operator=(Brain const &right)
{
    for(int i = 0; i  < 100; i++)
        ideas_[i] = right.ideas_[i];
    return (*this);
}

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain &Cpy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = Cpy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}