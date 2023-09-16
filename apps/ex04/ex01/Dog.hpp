/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:39:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 19:03:27 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Color.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *dogBrain_;
    public:
        Dog& operator=(Dog const &right);
        Dog();
        Dog(Dog& Cpy);
        ~Dog();
        void makeSound(void) const;
};

#endif