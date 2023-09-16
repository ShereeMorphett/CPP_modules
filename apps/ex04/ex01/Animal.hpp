/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:56:25 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 19:04:58 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Color.hpp"
/*
 A virtual function (also known as virtual methods) is a member function that is declared 
 within a base class and is re-defined (overridden) by a derived class. When you refer to a 
 derived class object using a pointer or a reference to the base class, you can call a virtual
 function for that object and execute the derived class’s version of the method.

 ------im very confused ------------
 To ensure you understood how it works, implement a WrongCat class that inherits
 from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
 in the code above, the WrongCat should output the WrongAnimal sound.
 Implement and turn in more tests than the ones given above.
*/

class Animal 
{
    protected:
        std::string type_;
    public:
        const std::string& getType() const;
        virtual void makeSound() const;
        Animal& operator=(Animal const &right);
        Animal();
        Animal(const std::string type);
        Animal(const Animal& Cpy);
        virtual ~Animal();
};




#endif