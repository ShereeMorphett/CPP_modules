/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:16:05 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 15:20:21 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Color.hpp"

void Character::printFloor() const
{
	for (int i = 0; i < 100; i++)
	{
		if (floor_[i] != NULL)
			std::cout << floor_[i]->getType() << std::endl;
	}
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if(things_[i] == NULL)
		{
			things_[i] = m->clone();
			break;
		}
		if(things_[i] != NULL && i == 3)
		{
			std::cout << "You cannot equip more than 4 things" << std::endl;
			delete m;	
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || things_[idx] == NULL)
    {
        std::cout << "Invalid index or empty slot. Nothing to unequip." << std::endl;
        return;
    }
	
	for (int i = 0; i < 100; i++)
	{
		if (floor_[i] == NULL)
		{
			floor_[i] = things_[idx];
			things_[idx] = NULL;
			break;
		}
		if (i == 99)
			std::cout << "You have dropped too many Materia on the floor....PICK THEM UP!" << std::endl;
	}
}
	
void Character::use(int idx, ICharacter& target)
{
	if (things_[idx] != NULL)
		things_[idx]->use(target);
	else
		std::cout << "You have nothing equipped at " << idx << "!" << std::endl;
}

std::string const & Character::getName() const
{
    return name_;
}

Character::Character(std::string name) : name_(name)
{
    for (int i = 0; i < 4; i++)
		things_[i] = NULL;

	for (int i = 0; i < 100; i++)
		floor_[i] = NULL;

}

Character::Character( Character const &src ): name_(src.name_)
{
 	std::cout << "A created a character named "<<  name_ << "from copy constructor" << std::endl;

	for(int i = 0; i < 100; i++)
	{
		if (src.floor_[i])
			floor_[i] = src.floor_[i]->clone();
		else
			floor_[i] = NULL;
	}
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
    for (int i = 0; i < 4; i++)
	{
		if (things_[i])
		{
			delete things_[i];
			things_[i] = NULL;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (floor_[i] != NULL)
		{
			delete floor_[i];
			floor_[i] = NULL;
		}
	}
}

Character &	Character::operator=( Character const & right )
{
	std::cout << "Copy operator" << std::endl;
    if( this != &right )
        name_ = right.name_;
    return *this;
}
