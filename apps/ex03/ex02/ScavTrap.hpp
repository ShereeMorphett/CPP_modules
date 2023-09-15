/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:30:57 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/15 15:41:56 by smorphet         ###   ########.fr       */
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
		ScavTrap(const ScavTrap &right);
		ScavTrap& operator=(ScavTrap const &right);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target); // Override attack to print a different message
};


#endif