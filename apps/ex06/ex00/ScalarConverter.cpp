/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:02:18 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/11 14:43:13 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <cstring>


int ScalarConverter::intValue_ = 0;
float ScalarConverter::fltValue_ = 0.0f;
char ScalarConverter::charValue_ = '\0';
double ScalarConverter::dblValue_ = 0.0;
int ScalarConverter::type_ = INT; 
bool ScalarConverter::isPossible_ = true; 
int ScalarConverter::isPseudo_ = NOTPSEUDO; 

void ScalarConverter::convert(const std::string &input)
{
	try
	{
    	setType(input);
		if (type_ == NOTYPE)
			throw invalidType();
		if (isPseudo_ == NOTPSEUDO && isPossible_ == true)
		{
			initialConversion(input);
			if (isPseudo_ == NOTPSEUDO && isPossible_ == true)
			{
				initialConversion(input);
				if (type_ != CHAR)
					convertToChar();
				if (type_ != INT)
					convertToInt();
				if (type_ != FLOAT)
					convertToFlt();
				if (type_ != DOUBLE)
					convertToDbl();
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

void ScalarConverter::initialConversion(const std::string &input)
{
	switch(type_)
	{
		case CHAR:
			charValue_ = input.front();
			break;
		case INT:
			intValue_ = stoi(input, nullptr);
			break;
		case FLOAT:
			fltValue_ = stof(input, nullptr);
			break;
		case DOUBLE:
			dblValue_ = stod(input, nullptr);
			break;
	}
}

bool ScalarConverter::isInfOrNan(const std::string& input)
{
    const char* cstr = input.c_str();

    if (std::strcmp(cstr, "nanf") == 0) //does this print differently?
	{
		isPseudo_ = NAN;
        return true;
	}
    else if (std::strcmp(cstr, "nan") == 0)
    {
		isPseudo_ = NAN;
	    return true;
	}
    else if (std::strcmp(cstr, "+inf") == 0)
    {
		isPseudo_ = POSINF;
	    return true;
	}
    else if (std::strcmp(cstr, "-inf") == 0)
    {
		isPseudo_ = NEGINF;
	    return true;
	}
    return false;
}

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

void ScalarConverter::setType(const std::string& input)
{
	if (input.empty())
    {
        type_ = NOTYPE;
		isPossible_ = false;
		return ;
    }
    else if (isInfOrNan(input))
    {
        //what does char do?
        intValue_ = std::numeric_limits<int>::infinity();
        fltValue_ = std::numeric_limits<float>::infinity();
        dblValue_ = std::numeric_limits<double>::infinity();
    }
    else if (input.length() == 1 && !std::isdigit(input[0]))
    {
        type_ = CHAR;
    }
    else
    {
        try
        {
			int decimalCount = decimalCounter(input);

            long double lDConversion = stold(input, nullptr);
            if (decimalCount == 1 && input.back() == 'f' && lDConversion <= std::numeric_limits<float>::max())
            {
                type_ = FLOAT;
            }
            else if (decimalCount == 0 && lDConversion <= std::numeric_limits<int>::max() && lDConversion >= std::numeric_limits<int>::min())
            {
                type_ = INT;
            }
            if (lDConversion <= std::numeric_limits<double>::max())
            {
                type_ = DOUBLE;
            }
            else
            {
                type_ = NOTYPE;
            }
        }
        catch (const std::exception&)
        {
            type_ = NOTYPE;
        }
    }
}

void ScalarConverter::convertToChar()
{
	charValue_ = static_cast<char>();
}

void ScalarConverter::convertToInt()
{
	charValue_ =
}

void ScalarConverter::convertToFlt()
{
}

void ScalarConverter::convertToDbl()
{
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

ScalarConverter &	ScalarConverter::operator=(ScalarConverter const &right)
{
    if (this != &right)
    {
		this->charValue_ = right.charValue_;
		this->intValue_ = right.intValue_;
		this->dblValue_ = right.dblValue_;
		this->fltValue_ = right.fltValue_;
    }
    return *this;
}
