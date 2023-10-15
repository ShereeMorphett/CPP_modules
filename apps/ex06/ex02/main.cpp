/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:21:01 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/15 16:36:41 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

/*
    Forbidden functions : std::typeinfo
  
    Implement a Base class that has a public virtual destructor only. Create three empty
    classes A, B and C, that publicly inherit from Base.

    These four classes don’t have to be designed in the Orthodox
    Canonical Form.
    
    Implement the following functions:
    
    Base * generate(void);
    It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
    to use anything you like for the random choice implementation.
    
    void identify(Base* p);
    It prints the actual type of the object pointed to by p: "A", "B" or "C".
    void identify(Base& p);
    
    It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
    inside this function is forbidden.
    
    Write a program to test that everything works as expected
*/


/*It randomly instanciates A, B or C and returns the instance as a Base pointer. 
Feel free to use anything you like for the random choice implementation. */

Base* generate() 
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int randomValue = std::rand() % 3;

    switch (randomValue) {
        case 0:
        {
            std::cout << "Creating type A" << std::endl;
            return new A();
        }
        case 1:
        {
            std::cout << "Creating type B" << std::endl;
            return new B();
        }
        case 2:
        {
            std::cout << "Creating type C" << std::endl;
            return new C();
        }
    }

    return nullptr;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "It's type A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "It's type B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "It's type C" << std::endl;
    else
        std::cout << "Somethings gone wrong" << std::endl;
}


void identify(Base& p) {
    identify(&p);
}

int main() {

    Base* randomObject = generate();
    identify(randomObject);

    delete randomObject;

    return 0;
}