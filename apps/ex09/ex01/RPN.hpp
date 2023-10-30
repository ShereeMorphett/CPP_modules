/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:58:36 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/30 17:24:29 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
    private:
        std::stack<int> equation_;
    
    public:
        RPN ();
        RPN( RPN const & src );
        ~RPN();
    
    void reversePolishNotation(std::string input);
    RPN &	operator=( RPN const & right );

};


#endif