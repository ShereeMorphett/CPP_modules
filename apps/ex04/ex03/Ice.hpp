/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:06:48 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:10:51 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP


#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:

		Ice &	operator=( Ice const & right);
		AMateria* clone() const;
		void use(ICharacter& target);
		Ice();
		Ice( Ice const & src );
		~Ice();

};

#endif