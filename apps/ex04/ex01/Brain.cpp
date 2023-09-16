/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:30:50 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 18:57:03 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain& Brain::operator=(Brain const &right)
{
    for(int i = 0; i  < 100; i++)
        ideas_[i] = right.ideas_[i];
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