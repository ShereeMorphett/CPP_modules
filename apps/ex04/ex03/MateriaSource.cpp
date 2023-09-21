/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:17:03 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 15:19:49 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Color.hpp"


void MateriaSource::printLearned_()
{
	for (int i = 0; i < 4; i++)
	{
		if (learned_[i])
			std::cout << learned_[i]->getType() << std::endl;
	}

}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (learned_[i] == NULL)
        {
            learned_[i] = m;
            break;
        }
        if (learned_[i] != NULL && i == 3)
        {
            std::cout << "You cannot Learn more than 4 things" << std::endl;
			delete m;
            m = NULL;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learned_[i]->getType() == type)
			return learned_[i]->clone();
	}
	std::cout << "ERROR: invalid type of Materia" << std::endl;
	return NULL;

}

MateriaSource::MateriaSource()
{
	// std::cout << "Materia Source constructor" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		learned_[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	// std::cout << "Material Source copy constructor" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (src.learned_[i])
			learned_[i] = src.learned_[i]->clone();
		else
			learned_[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	// std::cout << "Materia Source destructor" << std::endl;
	for (int i = 0; i < 4; i++)
    {
        if (learned_[i])
        {
            delete learned_[i];
            learned_[i] = NULL;
        }
    }
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & right)
{
	if( this != &right )
		static_cast<IMateriaSource&>(*this) = right;
	return (*this);
}
