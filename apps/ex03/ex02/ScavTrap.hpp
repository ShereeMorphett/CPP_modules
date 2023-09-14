/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:30:57 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/14 16:05:06 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>


class ScavTrap : public ClapTrap //inherits the public attributes
{
	public:
		ScavTrap(std::string id);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target); // Override attack to print a different message
};


#endif