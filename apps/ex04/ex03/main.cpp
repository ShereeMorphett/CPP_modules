/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:27:56 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:18:18 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

	/* expected outputs 
		$> clang++ -W -Wall -Werror *.cpp
		$> ./a.out | cat -e
		* shoots an ice bolt at bob *$
		* heals bob's wounds *$
	*/

int main()
{
	// IMateriaSource* src = new IMateriaSource(); 
	// src->learnMateria(new Ice()); 
	// src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	
	StreamColour col(COLOR_BLUE);
	{
		AMateria* tmp;
		std::cout << "---starting subject tests---" << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob"); me->use(0, *bob);
		me->use(1, *bob);
		
	}
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}


