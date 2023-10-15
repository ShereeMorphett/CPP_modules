/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:57:54 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/14 11:48:48 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Serializer_HPP
# define Serializer_HPP

#include "Data.hpp"

# include <iostream>

class Serializer
{
    private:
        Serializer ();
        Serializer( Serializer const & src );
        ~Serializer();
        Serializer &	operator=( Serializer const & right );

    public:
    /*
        Serialization: Serialization is the process of converting complex data structures or objects 
        into a format that can be easily stored, transmitted, or reconstructed later. 
        In this case, we are serializing a pointer (address) to an object.

        Deserialization: Deserialization is the reverse process of serialization.
        It involves converting serialized data back into its original form. 
        In this case, we are deserializing an unsigned integer back into a pointer.    
    */
 
    //It takes a pointer and converts it to the unsigned integer type uintptr_t
   static uintptr_t serialize(Data* ptr);

    //It takes an unsigned integer parameter and converts it to a pointer to Data.v
    static Data* deserialize(uintptr_t raw);
};


#endif