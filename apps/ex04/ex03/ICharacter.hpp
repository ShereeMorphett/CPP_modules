/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:36:36 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/17 16:46:17 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"


/*
    The Character possesses an inventory of 4 slots, which means 4 Materias at most.
    The inventory is empty at construction. They equip the Materias in the first empty slot
    they find. This means, in this order: from slot 0 to slot 3. In case they try to add
    a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything
    (but still, bugs are forbidden). The unequip() member function must NOT delete the
    Materia!
    Handle the Materias your character left on the floor as you like.
    Save the addresses before calling unequip(), or anything else, but
    don’t forget that you have to avoid memory leaks.
    The use(int, ICharacter&) member function will have to use the Materia at the
    slot[idx], and pass the target parameter to the AMateria::use function

    Your character’s inventory will be able to support any type of AMateria.
    Your Character must have a constructor taking its name as a parameter. Any copy
    (using copy constructor or copy assignment operator) of a Character must be deep.
    During copy, the Materias of a Character must be deleted before the new ones are added
    to their inventory. Of course, the Materias must be deleted when a Character is destroyed.
    Write the concrete class MateriaSource which will implement the following interface

     learnMateria(AMateria*)
    Copies the Materia passed as a parameter and store it in memory so it can be cloned
    later. Like the Character, the MateriaSource can know at most 4 Materias. They
    are not necessarily unique.
    • createMateria(std::string const &)
    Returns a new Materia. The latter is a copy of the Materia previously learned by
    the MateriaSource whose type equals the one passed as parameter. Returns 0 if
    the type is unknown.
    In a nutshell, your MateriaSource must be able to learn "templates" of Materias to
    create them when needed. Then, you will be able to generate a new Materia using just
    a string that identifies its type.*/
    
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif