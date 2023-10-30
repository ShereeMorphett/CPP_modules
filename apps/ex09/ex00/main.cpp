/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:35:05 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/30 11:50:42 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }
 	BitcoinExchange exchange;
    try
    {
        exchange.parseInitData();
        // exchange.conversion(argv[1]);
         exchange.handleInput("/home/sheree/Desktop/libft_CPP/apps/ex09/ex00/input.txt");

    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    // BitcoinExchange conversion(exchange);
    return 0;
}