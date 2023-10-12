/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:19:00 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/12 19:23:53 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data cat;    
    cat.species  = "Cat";
    cat.name  = "Brian";
    cat.numberOfLegs  = 4;

    Data dog;    
    cat.species  = "Dog";
    cat.name  = "Doggo";
    cat.numberOfLegs  = 4;

    Data fish;    
    cat.species  = "Fish";
    cat.name  = "Flippy";
    cat.numberOfLegs  = 0;

    //use these things on those things
    
    // uintptr_t Serializer::serialize(Data* ptr){}; //work out these things

    // Data* Serializer::deserialize(uintptr_t raw){};


}