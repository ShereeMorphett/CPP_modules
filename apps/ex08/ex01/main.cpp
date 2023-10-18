/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:06:42 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/18 13:11:54 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Color.hpp"
#include "Span.hpp"
#include <set>

int main()
{
	Span sp = Span(5);

	// std::set<int> stand = {6, 10, 5, 1};

	
	
	  sp.addNumber(6);
	  sp.addNumber(3);
	  sp.addNumber(17);
	  sp.addNumber(9);
	  sp.addNumber(11);
	  std::cout << sp.shortestSpan() << std::endl;
	//   std::cout << sp.longestSpan() << std::endl;
	return 0;
}