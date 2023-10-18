/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:30:47 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/18 13:08:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <set>

class Span
{
	private:
		std::set<int> nums_;
		int maxNum_;

	public:
		void addNumber(int num);
		int shortestSpan();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();
		Span &	operator=( Span const & right);
};



#endif