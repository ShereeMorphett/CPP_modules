/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:45:41 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/26 10:30:42 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Color.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


//need to test with copy constructors too

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

	
    delete meta;
    delete j;
    delete i;
    std::cout << COLOR_BRIGHT_BLUE << "End of subject given tests" << COLOR_RESET << std::endl << std::endl;

    std::cout << COLOR_BRIGHT_BLUE << "Testing Wrong Animal" << COLOR_RESET << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();
    const WrongAnimal* wrongI = new WrongCat(); 
    std::cout << wrongJ->getType() << " " << std::endl;
    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound();
    wrongJ->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongJ;
    delete wrongI;
    return 0;
}
