/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:30:47 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/23 12:26:22 by smorphet         ###   ########.fr       */
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
		void addNumber(std::vector<int> num);
		int shortestSpan();
		int longestSpan();
		void printNum();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();
		Span &	operator=( Span const & right);
	
	class spanException : public std::exception
	{
		public:
			virtual const char* what() const throw();		
	};
	
	class maxNumException : public std::exception
	{
		public:
			virtual const char* what() const throw();		
	};
};



#endif