/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:48:18 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/15 14:28:57 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "RPN.hpp"


int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Input Error" << std::endl;
        return 0;
    }
    RPN    input;
    try
    {
        input.reversePolishNotation(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}