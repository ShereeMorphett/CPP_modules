/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:06:42 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/18 13:12:03 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <vector>
#include <list>
#include <deque>
#include "Color.hpp"
#include "easyfind.tpp"

template <typename T>
void vectorTests(T& cont)
{
    try
    {
        std::cout << "Found: ";
		typename T::iterator result = easyfind(cont, 30);
        if (result != cont.end())
            std::cout << *result << " in cont" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;    
    }
    try
    {
        std::cout << "Found: ";
        typename T::iterator result = easyfind(cont, 300);
        if (result != cont.end())
            std::cout << *result << " in cont" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    std::vector<int> vect; 
	std::list<int> li;
	std::deque<int> deq;

	
    for (int i = 10; i >= 0; i--)
    {
        vect.push_back((i + 1) * 10);
		li.push_back((i + 1) * 10);
		deq.push_back((i + 1) * 10);
    }
    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << "vect = " << vect[i] << std::endl;

    }
	std::cout << COLOR_GREEN << "TESTING VECTORS" << COLOR_RESET << std::endl;
    vectorTests(vect);
	
	std::cout << COLOR_GREEN << "TESTING LIST" << COLOR_RESET << std::endl;
	vectorTests(li);
	
	std::cout << COLOR_GREEN << "TESTING DEQUE" << COLOR_RESET << std::endl;
	vectorTests(deq);
	
    
    return 0;
}
