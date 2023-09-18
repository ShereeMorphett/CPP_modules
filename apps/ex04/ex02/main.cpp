/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:45:41 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 09:20:32 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Color.hpp"


#define NUM_ANIMAL 5


int main()
{
	Animal	*animalArray[NUM_ANIMAL];
	// Animal animal(); // shows that it cannot be instantiated (for testing/evals)
	
	for (int i = 0; i < NUM_ANIMAL; i++)
	{
		if (i < NUM_ANIMAL / 2)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();
		std::cout << i << " ";
		std::cout << animalArray[i]->getType() << std::endl;
	}
	{
		StreamColour col(COLOR_BRIGHT_BLUE);
		std::cout << "\n\n\n\nSTART OF TESTS" << std::endl;
	}
		animalArray[0]->makeSound();
		animalArray[1]->makeSound();
		animalArray[2]->makeSound();
		animalArray[3]->makeSound();
		animalArray[4]->makeSound();
		
		Brain	*brain = animalArray[0]->getBrain();
		brain->setIdeas(0, "has an original idea");
		std::cout << "Animal from index 0 " << brain->getIdeas(0) << std::endl;
		
		brain = animalArray[3]->getBrain();
		brain->setIdeas(0, "different idea");
	
		std::cout << "Animal from index 3 " << brain->getIdeas(0) << std::endl;
		{
			StreamColour col(COLOR_BRIGHT_GREEN);
			std::cout << "Showing each brain has different addresses "<< std::endl;
			StreamColour color(COLOR_BRIGHT_MAGENTA);
			std::cout << animalArray[0]->getBrain() << std::endl;
			std::cout << animalArray[1]->getBrain() << std::endl;
			std::cout << animalArray[2]->getBrain() << std::endl;
			std::cout << animalArray[3]->getBrain() << std::endl;
			std::cout << animalArray[4]->getBrain() << std::endl;
		}
		{
			StreamColour col2(COLOR_BRIGHT_BLUE);
			std::cout << "END OF TESTS\n\n\n\n" << std::endl;
		}
	
	for (int i = 0; i < NUM_ANIMAL; i++)
		delete animalArray[i];

}
