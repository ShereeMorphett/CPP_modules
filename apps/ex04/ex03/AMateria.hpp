/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:29:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/17 16:46:51 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"
/*
    Implement the Materias concrete classes Ice and Cure.
    Use their name in lowercase ("ice" for Ice, "cure" for Cure) to set their types.
    Of course, their member function clone() will return a new instance of the same type
    (i.e., if you clone an Ice Materia, you will get a new Ice Materia).
    
    The use(ICharacter&) member function will display:
        • Ice: "* shoots an ice bolt at <name> *"
        • Cure: "* heals <name>’s wounds *"
        <name> is the name of the Character passed as parameter. Don’t print the angle
        brackets (< and >).

    While assigning a Materia to another, copying the type doesn’t make sense.
    
    
*/


class AMateria
{
    protected:

    public:
        AMateria(std::string const & type);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif