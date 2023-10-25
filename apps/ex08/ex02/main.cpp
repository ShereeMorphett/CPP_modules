/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:34:16 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/25 15:04:45 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "Color.hpp"
#include <list>
#include <vector>

void listTest()
{
	std::list<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "top: " << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "size: "<< mstack.size() << std::endl;
	
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(mstack);
}


void vecTest()
{
	std::vector<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "top: " << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "size: "<< mstack.size() << std::endl;
	
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	
	std::vector<int>::iterator it = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::vector<int> > s(mstack);

}


void mutantStackTest()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);	
}


int main()
{
	std::cout << COLOR_GREEN << "\nTesting Mutant Stack" << COLOR_RESET << std::endl;
	mutantStackTest();
	std::cout << COLOR_GREEN << "\nTesting List" << COLOR_RESET << std::endl;
	listTest();
	std::cout << COLOR_GREEN << "\nTesting Vector" << COLOR_RESET << std::endl;
	vecTest();
	return 0;
}