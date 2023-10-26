/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:35:05 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/26 15:20:43 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[])
{

	std::ifstream f("data.csv");
	//assume stream is valid
	if (f.fail())
	{
		std::cout << "well this is gonna take longer than planned" << std::endl;
		return 1;
	}
	
	// std::cout << dataFile << std::endl;
	
	return 0;
}