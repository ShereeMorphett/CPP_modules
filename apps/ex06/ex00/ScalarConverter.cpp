/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:02:18 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/12 15:18:05 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <iomanip>

static int decimalCounter(const std::string& input)
{
	int decCount = 0;

    for (std::size_t i = 0; i < input.length(); ++i)
	{
        if (input[i] == '.')
		{
            decCount++;
        }
    }
    return decCount;
}
static void pseudoprint(const std::string& input)
{
	std::cout << "char: " << "impossible" << "\n";
	std::cout << "int: " << "impossible" << "\n";
	std::cout << "float: " << input << "\n";
	if (input == "-inff"  ||input == "+inff" || input == "nanf"  )
	{
		std::string temp = input;
		temp.pop_back();
		std::cout << "double: " << temp << "\n";
	}
	else
		std::cout << "double: " << input << "\n";
}


static bool isInfOrNan(const std::string& input)
{
    if (input == "nanf" || input == "nan")
	{
		pseudoprint(input);
		return true;
	}
	else if (input == "+inff" || input == "-inff")
	{
		pseudoprint(input);
		return true;
	}
    else if (input == "+inf" || input == "-inf")
	{
		pseudoprint(input);
		return true;
	}
    return false;
}

template <typename T>
static void printChar(T val)
{
    std::cout << "char: ";
	if (val < 127)
	{
		if (static_cast<char>(val) >= 33 && static_cast<char>(val) < 127)
		{
			std::cout << "'" << static_cast<char>(val) << "'" << "\n";
			return;    
		}
		if (isdigit(static_cast<char>(val)))
		{
			std::cout << static_cast<char>(val) << "\n";
			return;    
		}
	}
		if ((static_cast<char>(val) < 0 || static_cast<char>(val)  >= 128) || (val < 0 || val >= 128))
		{
			std::cout << "impossible\n";
			return;    
		}
		if (static_cast<char>(val) < 32 || static_cast<char>(val) == 127) 
		{
			std::cout << "Non displayable\n";
			return;    
		}
		std::cout << static_cast<char>(val) << "\n";
	}

template <typename T>
static void printInt(T val, char prefix)
{
    std::cout << "int: ";
	if (static_cast<int>(val) < std::numeric_limits<int>::max() && static_cast<int>(val) > std::numeric_limits<int>::min())
	{
		if (prefix)
			std::cout << prefix;
		std::cout << static_cast<int>(val) << "\n";
	}
	else
	{
        std::cout << "impossible\n";
        return;    
    }
	return;
}

template <typename Type, typename T>
static void printFloatingPoint(const char* typeName, T val, const char* suffix, char prefix)
{
    std::cout << typeName << ": ";
	if (static_cast<Type>(val) == 0 || (static_cast<Type>(val) < std::numeric_limits<Type>::max() && static_cast<Type>(val) > std::numeric_limits<Type>::min()))
    {
		if (prefix)
			std::cout << prefix;
		Type result = static_cast<Type>(val);
		std::cout << std::fixed << std::setprecision(1) << result;
	}
	else
	{
        std::cout << "impossible\n";
        return;    
    }
    if (suffix != NULL)
    {
        std::cout << "f\n";
        return;
    }
    std::cout << "\n";
}

template <typename T>
static void print(T val, char prefix)
{
    printChar(val);
    printInt(val, prefix);
    printFloatingPoint<float>("float", val, "f", prefix);
    printFloatingPoint<double>("double", val, NULL, prefix);
}

static void dfConvert(char prefix, const std::string &input)
{
	std::size_t numChars;
	long double ldConversion = stold(input, &numChars);
	static_cast<void>(ldConversion);
	if (numChars == input.length())
	{
		long double val = stold(input, nullptr);
		print(val, prefix);
		return;
	}
}

static void handleFltDbl(const std::string &input)
{
	if (input.back() == 'f' && (input.front() != '-' || input.front() != '+'))
	{
		std::string temp = input;
		temp.pop_back();
		dfConvert('\0', temp);
	}
	if (input.back() == 'f' && (input.front() == '-' || input.front() == '+'))
	{
		char prefix = input[0];
		std::string temp = input;
		temp.pop_back();
		temp.erase (0,1);
		dfConvert(prefix, temp);
	}
	else if (input.front() == '-' || input.front() == '+')
	{
		std::string temp = input;
		char prefix = input[0];
		temp.erase (0,1);
		dfConvert(prefix,temp);
	}
	else
		dfConvert('\0', input);
}

void ScalarConverter::convert(const std::string &input)
{
    try
    {
        if (input.empty())
        {
            throw invalidType();
		}
        if (isInfOrNan(input))
            return;
        if (input.length() == 1 && !isdigit(input[0]))
        {
            print(input[0], '\0');
            return;
        }
        if (input.back() == 'f' || decimalCounter(input) == 1)
        {
			handleFltDbl(input);
			return;
		}
		if (decimalCounter(input) == 0)
        {
			std::string temp = input;
			char prefix = '\0';
			if (input[0] == '+' || input[0] == '-')
			{
				prefix = input[0];
				temp.erase (0,1);
			}
			dfConvert(prefix, temp);
			return;
        }
        else
        {
			throw invalidType();
            return;
        }
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
}

const char* ScalarConverter::invalidType::what() const throw()
{
    return "There are no valid types for this input";
}






////constructors and copy operator overload////////

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
    *this = src; 
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &	ScalarConverter::operator=(ScalarConverter const &right) //this is useless
{
    return *this;
}
