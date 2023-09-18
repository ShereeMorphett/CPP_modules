/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:24:40 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 12:41:35 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include <iostream>

class Cure
{
	private:

	public:

		Cure ();
		Cure( Cure const & src );
		~Cure();

		Cure &	operator=( Cure const & right);
};

#endif