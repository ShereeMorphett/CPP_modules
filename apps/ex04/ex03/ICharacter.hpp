/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:00:56 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:16:49 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICharacter_HPP
# define ICharacter_HPP

# include <iostream>

class AMateria;

class ICharacter //Interface there for none instantiable
{
 	public:
		virtual ~ICharacter() {};
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
