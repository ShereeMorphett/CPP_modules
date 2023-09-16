/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:45:41 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 19:10:59 by smorphet         ###   ########.fr       */
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
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    std::cout << COLOR_BRIGHT_BLUE << "End of subject given tests" << COLOR_RESET << std::endl << std::endl;

    return 0;
}
