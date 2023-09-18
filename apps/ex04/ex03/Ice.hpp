/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:06:48 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 12:47:42 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

# include <iostream>
# include "ICharacter.hpp"

class Ice
{
	private:

	public:

		Ice ();
		Ice( Ice const & src );
		~Ice();
		Ice &	operator=( Ice const & right);
		virtual void use(int idx, ICharacter& target);

};

#endif