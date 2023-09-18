/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:24:40 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:16:14 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"

/*Ice and Cure Classes:

    Implement the clone() function to create a new instance of the same type.
    Implement the use(ICharacter& target) function with specific behavior for each type.
	Step 2: Create the Ice and Cure Classes

   
    Implement the constructors of Ice and Cure to set their types ("ice" and "cure").
    Implement the clone() function in both classes to create new instances of the same type.
    Implement the use(ICharacter& target) function in both classes with the specific behavior for each type.
	
	*/

# include <iostream>

class Cure : public AMateria
{
	private:

	public:

		AMateria* clone() const;
		void use(ICharacter& target);
		Cure(std::string type);
		Cure(Cure const & src );
		~Cure();
		Cure &operator=( Cure const & right);
};

#endif