/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:02:18 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/11 19:13:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <limits>

enum e_type
{
    CHAR, INT, FLOAT, DOUBLE, NOTYPE, NANINF
};

struct s_state
{
    char charValue;
    int intValue;
    double dblValue;
    float fltValue;
};

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


// static bool isInfOrNan(const std::string& input)
// {
//     const char* cstr = input.c_str();

//     if (input == "nanf") //does this print differently?
// 	{
// 		isPseudo_ = NAN;
//         return true;
// 	}
//     else if (input == "nan")
//     {
// 		isPseudo_ = NAN;
// 	    return true;
// 	}
//     else if (input == "+inf")
//     {
// 		isPseudo_ = POSINF;
// 	    return true;
// 	}
//     else if (input == "-inf")
//     {
// 		isPseudo_ = NEGINF;
// 	    return true;
// 	}
//     return false;
// }

//template function for each type

template <typename T>
static void printChar(T val)
{
    std::cout << "char: ";

    if (val < static_cast<T>(0) || val >= static_cast<T>(128))
    {
        std::cout << "impossible\n";
        return;    
    }
    
    if (static_cast<char>(val) <= ' ' || static_cast<char>(val) == 127) // 127 == DEL
    {
        std::cout << "Non displayable\n";
        return;    
    }

    std::cout << static_cast<char>(val) << "\n";
}

template <typename T>
static void printInt(T val)
{
    //NEEDS TO CHECK ALL THE THINGS
    std::cout << "int: ";
    std::cout << static_cast<int>(val) << "\n";
}

template <typename Float, typename T>
static void printFloatingPoint(const char* type_name, T val, const char* suffix)
{
    std::cout << type_name << ": ";
    
    std::cout << static_cast<Float>(val);
    if (suffix != NULL)
    {
        std::cout << "f\n";
        return;
    }
    std::cout << "\n";
}

template <typename T>
static void print(T val)
{
    printChar(val);
    printInt(val);
    printFloatingPoint<float>("float", val, "f");
    printFloatingPoint<double>("double", val, NULL);
}


void ScalarConverter::convert(const std::string &input)
{
    try
    {
        if (input.empty())
        {
            throw invalidType();
        }

        // if (isInfOrNan(input))//
        // {
        //     std::cout << "PSUEDO LITERAL DETECTED\n";
        //     return;
        // }
        
        if (input.length() == 1 && !std::isdigit(input[0]))
        {
            print(input[0]);
            return;
        }
        if (/* ends with an f or contains a . */)
        {
            // read in as double
            // do numchars thing, throw if hasnt consumed the whole string
            
            return;
        }
        else(/*read in as int*/)
        // do numchars thing, throw if hasnt consumed the whole string

        
        else
        {
            int decimalCount = decimalCounter(input);
            std::size_t numChars;
            long double lDConversion = stold(input, &numChars);
            if (numChars == input.length())
            {
                if (input.length() == 1 && !std::isdigit(input[0]))
                {
                    char val = input[0];
                    print(val);
                }
                if (decimalCount == 1 && input.back() == 'f' && lDConversion <= std::numeric_limits<float>::max())
                {
                    float val = stof(input, nullptr);
                    print(val);
                }
                else if (decimalCount == 0 && lDConversion <= std::numeric_limits<int>::max() && lDConversion >= std::numeric_limits<int>::min())
                {
                    int val = stoi(input, nullptr);
                    print(val);
                }
                if (lDConversion <= std::numeric_limits<double>::max())
                {
                    int val = stod(input, nullptr);
                    print(val);
                }
                else
                {
                    throw invalidType();
                    return;
                }
            }
            
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
