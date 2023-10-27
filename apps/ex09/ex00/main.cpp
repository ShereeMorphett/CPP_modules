/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:35:05 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/27 14:19:21 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <fstream>
#include <sstream>
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
	// 	if (argc != 2)
// 		return 0;
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

 	BitcoinExchange exchange;
//    std::map<std::string, double> dataMap; //needs to be in the class

    try
    {
        exchange.parseInitData();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

// int main(int argc, char* argv[])
// {
// 	BitcoinExchange exchange;

// 	return 0;
// }