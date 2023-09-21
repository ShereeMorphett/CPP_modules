/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:29:26 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 11:00:13 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"


/* 
	They equip the Materias in the first empty slot they find. 
	This means, in this order: from slot 0 to slot 3. In case they try to add a Materia to a full inventory, or 
	use/unequip an unexisting Materia, don’t do anything (but still, bugs are forbidden).
	The unequip() member function must NOT delete the Materia!

    Implement the equip(AMateria* m) function to add materias to the character's inventory.
    Implement the unequip(int idx) function to remove materias from the character's inventory.
    Implement the use(int idx, ICharacter& target) 
	function to use a materia from the character's inventory on a target.
*/

class Character : public ICharacter
{
	private:
		AMateria* things_[4];
		AMateria* floor_[100];
		std::string name_;
	public:
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		void printFloor() const;
		std::string const & getName() const;
		Character(std::string name);
		Character(Character const & ref);
		~Character();
		Character & operator=(Character const & ref);
		
};

#endif