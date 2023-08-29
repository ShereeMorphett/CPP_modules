/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:20:51 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 10:20:52 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  
 #include "Zombie.hpp"
 
 void randomChump( std::string name )
 {
	//creates the object on the stack
	Zombie randomChump(name);
	randomChump.announce();
 }//end of scope and all allocated to stack are destroyed