/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:59:12 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/30 17:26:38 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
    • Your program must take an inverted Polish mathematical expression as an argu-
    ment.
    • The numbers used in this operation and passed as arguments will always be less
    than 10. The calculation itself but also the result do not take into account this rule.
    • Your program must process this expression and output the correct result on the
    standard output.
    • If an error occurs during the execution of the program an error message should be
    displayed on the standard output.
    • Your program must be able to handle operations with these tokens: "+ - / *".
*/


void RPN::reversePolishNotation(std::string input)
{
 
    
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
