/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:16:05 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:16:54 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if(things_[i] == NULL)
		{
			things_[i] = m->clone();
		}
	}
}

// void Character::unequip(int idx); //what the ever loving fuck
	
void Character::use(int idx, ICharacter& target)
{
	things_[idx]->use(target);
}

std::string const & Character::getName() const
{
    return name_;
}

Character::Character(std::string name) : things_{0,0,0,0}, name_(name) 
{
    name_ = name;
	std::cout << "A created a character named "<<  name_ << std::endl;
}

Character::Character( Character const &src ): name_(src.name_)
{
 	//print statement

	for(int i = 0; i < 4; i++)
	{
		if (src.things_[i])
			things_[i] = src.things_[i]->clone();
		else
			things_[i] = NULL;
	}
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) //does this need a null check?
		delete things_[i];
}

Character &	Character::operator=( Character const & right )
{
    if( this != &right )
        name_ = right.name_;
    return *this;
}
