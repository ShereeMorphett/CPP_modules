/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:19:00 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/15 11:12:05 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>



int main()
{

    Data fish;
    fish.species = "Fish";
    fish.name = "Flippy";
    fish.numberOfLegs = 0;

    // Serialize the Fish object
    uintptr_t uIntPtr = Serializer::serialize(&fish);

    // Deserialize the uintptr_t back to a Data pointer
    Data *dataPtr = Serializer::deserialize(uIntPtr);


    std::cout << "Original Fish Data (Address of Fish object): " << &fish << std::endl;
    std::cout << "Name: " << fish.name << " Species: " << fish.species << " Legs: " << fish.numberOfLegs << std::endl;

    std::cout << "\nSerialized Data (Address of Data object): " << uIntPtr << std::endl;

    std::cout << "\nDeserialized Data (Address of Deserialized Data object): " << dataPtr << std::endl;
    if (dataPtr)
        std::cout << "Name: " << dataPtr->name << " Species: " << dataPtr->species << " Legs: " << dataPtr->numberOfLegs << std::endl;
    else
        std::cout << "Deserialization failed." << std::endl;
    return 0;
}
