/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:48:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/04 15:26:09 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*switch (expression)  {
    case constant1:
        // code to be executed if 
        // expression is equal to constant1;
        break;

    case constant2:
        // code to be executed if
        // expression is equal to constant2;
        break;
    default:
        // code to be executed if
        // expression doesn't match any constant
}*/


/*sometimes you don’t want to pay attention to everything Harl says. Implement a
system to filter what Harl says depending on the log levels you want to listen to.
Create a program that takes as parameter one of the four levels. It will display all
messages from this level and above. For example:

$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
Although there are several ways to deal with Harl, one of the most effective is to
SWITCH it off.

Give the name harlFilter to your executable.
You must use, and maybe discover, the switch statement in this exercise.*/

static int levelIndex(char *input)
{
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    
    while (levels[i] != input && i < 4)
        i++;
    return i;
}

static void harlFilter(Harl harl, char *input)
{
    switch(levelIndex(input))
    {
        default:
            std::cout << "[Probably complaining about insignificant problems ]" << std::endl;
            break;
        case 0:
            std::cout << "[DEBUG]" << std::endl;
            harl.complain("DEBUG");
        case 1:
            std::cout << "[INFO]" << std::endl;
            harl.complain("INFO");
        case 2:
            std::cout << "[WARNING]" << std::endl;
            harl.complain("WARNING");
        case 3:
            std::cout << "[ERROR]" << std::endl;
            harl.complain("ERROR");
    }
}

int main(int argc, char **argv)
{

    Harl    harl;
    
    if (argc != 2)
    {
        std::cout << "Usage: harlFilter <log_level>" << std::endl;
        return 1;
    }
    else
        harlFilter(harl, argv[1]);
 
    return 0;
}