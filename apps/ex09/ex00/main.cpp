/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:35:05 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/27 14:04:29 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <fstream>
#include <sstream>
#include "BitcoinExchange.hpp"



void parseInitData(std::map<std::string, double>& dataMap)
{
    std::string fileName = "/Users/smorphet/Desktop/libft_CPP/apps/ex09/ex00/data.csv";
    std::ifstream file(fileName);
    std::string line;

    if (file.fail())
        throw std::runtime_error("File open error");
    while (getline(file, line))
    {
        std::istringstream ss(line);
        std::string date;
        double value;

        if (getline(ss, date, ',') && ss >> value)
            dataMap[date] = value;
        else
            std::cerr << "Error parsing line: " << line << std::endl;
    }

    file.close();
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    std::map<std::string, double> dataMap;

    try
    {
        parseInitData(dataMap);
        
        // Now dataMap contains the parsed data
        for (std::map<std::string, double>::const_iterator it = dataMap.begin(); it != dataMap.end(); ++it)
        {
            std::cout << "Date: " << it->first << "		Value: " << it->second << std::endl;
        }
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
// 	if (argc != 2)
// 		return 0;
// 	try
// 	{
// 		parseInitData(exchange);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cout << "Error: " << e.what() << std::endl;
// 	}
// 	return 0;
// }