/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:58:50 by miricci           #+#    #+#             */
/*   Updated: 2026/04/22 20:49:50 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_nbrs;
	public:
		Span( void );
		Span( int N );
		Span( const Span& other );
		Span& operator=( const Span& other );
		~Span( void );

		void	addNumber( int n );

		class 	FullSpanException: public std::exception 
		{
		public:
			const char*	what() const throw();
		};

		class 	NoSpanFoundException: public std::exception
		{
		public:
			const char*	what() const throw();
		};

		int		longestSpan();
		int		shortestSpan();
};
#endif