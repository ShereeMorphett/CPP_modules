/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:36:12 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/10 10:33:33 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}
void	Harl::info(void)
{
        std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void	Harl::warning(void)
{
     std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void	Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}


void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
    void (Harl::*complaint_funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int index = 0; index < 4; index++)
	{
		if (levels[index] == level)
		{
			(this->*complaint_funcs[index])();
			break ;
		}
	}
}