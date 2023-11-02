/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:59:12 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/31 12:51:36 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "Color.hpp"
#include <limits>

/*
    • Your program must take an inverted Polish mathematical expression as an argu-
    ment.
    • The numbers used in this operation and passed as arguments will always be less
    than 10. The calculation itself but also the result do not take into account this rule.
    • Your program must process this expression and output the correct result on the
    standard output.
    • If an error occurs during the execution of the program an error message should be
    displayed on the standard output.
    • Your program must be able to handle operations with these tokens: "+(43)		-(45)	 /(47)	 *( 42)".
*/

//"8 9 * 9 - 9 - 9 - 4 - 1 +"

// static void printStack(std::stack<int> equation_)
// {
// 	while (!equation_.empty())
// 	{
// 		std::cout << COLOR_MAGENTA;
// 		std::cout << equation_.top() << " ";
// 		equation_.pop();
// 		std::cout << COLOR_RESET;
// 	}
// }

static bool isMathOperator(int token)
{
	if (token == plus || token == minus ||  token == divide || token == multiply)
		return true;
	return false;
}
static bool checkAnswer(double answer)
{
	if (answer < std::numeric_limits<int>::max() && answer > std::numeric_limits<int>::min())
		return true;
	return false;
}

void RPN::runMathsOperator(int token)
{
	double answer = 0;
	int value1, value2;
	switch (token)
	{
		case plus:
			value1 = equation_.top();
			equation_.pop();
			value2 = equation_.top();
			equation_.pop();
			answer = static_cast<double>(value2) + static_cast<double>(value1);
			if (checkAnswer(answer))
				equation_.push(value2 + value1);
			else
				throw std::logic_error("Error");
			break;
		case minus:
			value1 = equation_.top();
			equation_.pop();
			value2 = equation_.top();
			equation_.pop();
			answer = static_cast<double>(value2) - static_cast<double>(value1);
			if (checkAnswer(answer))
				equation_.push(value2 - value1);
			else
				throw std::logic_error("Error");
			break;
		case divide:
			value1 = equation_.top();
			equation_.pop();
			value2 = equation_.top();
			equation_.pop();
			if (value1 >= 0 && value2 >= 0)
				answer = static_cast<double>(value2) / static_cast<double>(value1);
			if (checkAnswer(answer) && value1 >= 0 && value2 >= 2 )
				equation_.push(value2 / value1);
			else
				throw std::logic_error("Error");
			break;
		case multiply:
			value1 = equation_.top();
			equation_.pop();
			value2 = equation_.top();
			equation_.pop();
			answer = static_cast<double>(value2) * static_cast<double>(value1);
			if (checkAnswer(answer))
				equation_.push(value2 * value1);
			else
				throw std::logic_error("Error");
			break;
		default:
			throw std::logic_error("Operator Error");
	}
 }


void RPN::reversePolishNotation(std::string input)
{
	std::stringstream ss(input);
	char ch;
	
	while (ss >> ch)
	{
		try
		{
			if (ch <= '9' && ch >= '0' )
			{
				int token = static_cast<int>(ch) - '0';
				equation_.push(token);
			}
			else if (ss && isMathOperator(ch))
			{
				if (equation_.size() < 2)
				{
                    throw std::logic_error("Not enough operands for operator");
                }
				else 
					runMathsOperator(ch);
			}
			else if (ss && ch == ' ')
				continue;
			else
			{
				throw std::logic_error("Error");
			}
		}
		catch(const std::exception& e)
		{
			
			std::cerr << COLOR_RED << e.what() << COLOR_RESET << '\n';
			return;
		}
	}
	if (equation_.size() == 1)
		std::cout << COLOR_GREEN << equation_.top() << COLOR_RESET << std::endl;
	else
	{
		throw std::logic_error("More than 1 value left in stack");
	}
}

RPN::RPN()
{}

RPN::RPN( RPN const & src )
{
    *this = src; 
}

RPN::~RPN()
{}

RPN &	RPN::operator=( RPN const & right )
{
    if( this != &right )
        equation_ = right.equation_;
    return *this;
}