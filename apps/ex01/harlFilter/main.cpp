/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:48:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/05 09:28:22 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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