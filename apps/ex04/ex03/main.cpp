/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:27:56 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 15:18:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());	
	src->printLearned_();
	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << COLOR_YELLOW << "Subject Tests" << COLOR_RESET << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		delete tmp;
		tmp = src->createMateria("cure");
		me->equip(tmp);
		delete tmp;
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
	me->use(1, *bob);
	std::cout << COLOR_YELLOW << "End Subject Tests\n\n" << COLOR_RESET << std::endl;

	std::cout << COLOR_YELLOW << "Copy Constructor Tests\n\n" << COLOR_RESET << std::endl;
		Character originalCharacter("Original");
		tmp = src->createMateria("ice");
		originalCharacter.equip(tmp);
		delete tmp;
		Character copyCharacter(originalCharacter);
		originalCharacter.use(0, *bob);
		copyCharacter.use(0, *bob);
	std::cout << COLOR_YELLOW << "End of copy constructor Tests\n\n" << COLOR_RESET << std::endl;

	std::cout << COLOR_YELLOW << "Over Filling equip array" << COLOR_RESET << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		delete tmp;
		tmp = src->createMateria("cure");
		me->equip(tmp);
		delete tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		
	std::cout << COLOR_YELLOW << "\n\nUsing Full array" << COLOR_RESET << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << COLOR_YELLOW << "\n\nUnequipping array" << COLOR_RESET << std::endl;
	me->unequip(0);
	me->use(0, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->unequip(2);
	me->use(2, *bob);
	me->unequip(3);
	me->use(3, *bob);
	me->unequip(4);

	std::cout << COLOR_YELLOW << "\n\nprinting floor array" << COLOR_RESET << std::endl;
	me->printFloor();
	
	std::cout << COLOR_YELLOW << "\n\nOver Filling Learn array" << COLOR_RESET << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->printLearned_();
	
	
	
	delete bob;
	delete me;
	delete src;

	return 0; 
}

