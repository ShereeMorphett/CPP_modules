/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:58:36 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/31 12:27:18 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>

enum MathOperator
{
	plus=43,
	minus=45,
	divide=47,
	multiply=42
};

class RPN
{
    private:
        std::stack<int> equation_;
    
    public:
        RPN ();
        RPN( RPN const & src );
        ~RPN();
		
   	void runMathsOperator(int token);
    void reversePolishNotation(std::string input);
    RPN &	operator=( RPN const & right );

};


#endif