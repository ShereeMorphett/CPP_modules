/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:06:42 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/21 10:37:37 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Color.hpp"
#include "Span.hpp"
#include <set>

int main()
{
	Span sp = Span(5);

	
	  sp.addNumber(6);
	  sp.addNumber(3);
	  sp.addNumber(17);
	  sp.addNumber(9);
	  sp.addNumber(11);
	  std::cout << sp.shortestSpan() << std::endl;
	  std::cout << sp.longestSpan() << std::endl;
	return 0;
}