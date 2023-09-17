/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:24:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/17 16:33:33 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
    An interface describes the behavior or capabilities of a C++ class without committing to a 
    particular implementation of that class.
        The C++ interfaces are implemented using abstract classes and these abstract classes should not 
    be confused with data abstraction which is a concept of keeping implementation details separate 
    from associated data.
        A class is made abstract by declaring at least one of its functions as pure virtual function. 
    A pure virtual function is specified by placing "= 0" in its declaration as follows
        The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate 
    base class from which other classes can inherit. Abstract classes cannot be used to 
    instantiate objects and serves only as an interface. Attempting to instantiate an object of an 
    abstract class causes a compilation error.
        Thus, if a subclass of an ABC needs to be instantiated, it has to implement each of the 
    virtual functions, which means that it supports the interface declared by the ABC. 
    Failure to override a pure virtual function in a derived class, then attempting to instantiate
    objects of that class, is a compilation error.
    Classes that can be used to instantiate objects are called concrete classes.
*/

void main()
{
    
    
}