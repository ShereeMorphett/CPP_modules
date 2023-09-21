/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:24:40 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 12:39:06 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"

# include <iostream>

class Cure : public AMateria
{
	private:

	public:

		AMateria* clone() const;
		void use(ICharacter& target);
		Cure();
		Cure(std::string type);
		Cure(Cure const & src );
		~Cure();
		Cure &operator=( Cure const & right);
};

#endif