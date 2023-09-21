/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:06:48 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/19 10:41:50 by smorphet         ###   ########.fr       */
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
		Ice(std::string type);
		Ice( Ice const & src );
		~Ice();

};

#endif