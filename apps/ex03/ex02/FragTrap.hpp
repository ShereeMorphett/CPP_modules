/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:07:22 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/15 16:14:54 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
However, its construction and destruction messages must be different. Proper
construction/destruction chaining must be shown in your tests. 

When a FragTrap is created, the program starts by building a ClapTrap. 
Destruction is in reverse order.

Again, add more tests to your program.

*/


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>
#include <iostream>


class FragTrap : public ClapTrap //inherits the public attributes
{
	public:
		FragTrap(std::string id);
		
		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &right);
		~FragTrap();
		void highFivesGuys(void);
};




#endif