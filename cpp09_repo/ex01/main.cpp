/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:48:18 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/31 10:05:06 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "RPN.hpp"
/*  
stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
      stack.push(num);
    stack.pop();
    stack.pop();
      stack.pop();
   */


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