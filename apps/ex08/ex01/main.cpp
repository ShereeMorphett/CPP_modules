/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:06:42 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/23 13:29:03 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Color.hpp"
#include "Span.hpp"
#include <set>
#include <vector>

int main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(100);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		int maxNum = 10;
		Span sp = Span(10);
		srand(time(0));
		for (int fill = 0; fill < maxNum; fill++)
		{
			int num = rand() / 2000;
			sp.addNumber(num);
		}
		sp.printNum();
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		try
		{
			int maxNum = 10000;
			Span sp = Span(10);
			srand(time(0));
			for (int fill = 0; fill <= maxNum; fill++)
			{
				int num = rand() / 2000;
				sp.addNumber(num);
			}
			std::cout << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			int maxNum = 10;
			Span sp = Span(maxNum);
			std::vector<int> vect{ 15, 21, 33, 220, 20};
			sp.addNumber(vect);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			int maxNum = 10000;
			Span sp = Span(maxNum);
			srand(time(0));
			for (int fill = 0; fill <= maxNum; fill++)
			{
				int num = rand() / 2000;
				sp.addNumber(num);
			}
			std::cout << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}