/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:03:08 by miricci           #+#    #+#             */
/*   Updated: 2026/04/22 21:36:06 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _N(0) { _nbrs.reserve(0); }

Span::Span( int N ): _N(N) { _nbrs.reserve(_N); }

Span::Span( Span const & other ) : _N(other._N), _nbrs(other._nbrs) {}

Span& Span::operator=( Span const & other ) {
	if (this != &other) {
		_N = other._N;
		_nbrs = other._nbrs;
	}
	return *this;
}

Span::~Span( void ) {}

void	Span::addNumber( int n ) {
	if (_nbrs.size() == _nbrs.capacity())
		throw FullSpanException();
	else
		_nbrs.push_back(n);
}

int		Span::longestSpan( void ) {
	if (_N < 2)
		throw NoSpanFoundException();
	else
	{
		std::vector<int>::iterator	it;
		int	min = _nbrs.front();
		int max = _nbrs.front();
		for (it == _nbrs.begin(); it != _nbrs.end(); ++it;) {
			if (*it < min)
				min = *it;
			else if (*it > max)
				max = *it;
		}
		return max - min;
	}
}

int		Span::shortestSpan( void ) {
	
}

const char*		Span::FullSpanException::what( void ) const { return "Span is full"; }
const char*		Span::NoSpanFoundException::what( void ) const { return "No span could be found"; }
