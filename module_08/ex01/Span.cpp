/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:03:08 by miricci           #+#    #+#             */
/*   Updated: 2026/05/02 15:40:49 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// === OTHODOX CANONICAL FORM ===
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

// === GETTERS ===
int		Span::getNumber( unsigned int pos ) { return _nbrs.at(pos); }
int		Span::getNbrOfElements()			{ return _nbrs.size(); }
int		Span::getSize()						{ return _nbrs.capacity(); }

// === OUTSTREAM OPERATOR ===
std::ostream&	operator<<( std::ostream& o, Span& sp ) {
	o << "{ ";
	for (int i = 0; i < sp.getNbrOfElements(); i++) {
		o << sp.getNumber(i);
		if (i < sp.getNbrOfElements() - 1)
			o << ", ";
	}
	o << " }";
	return o;	
}

// === EXCEPTIONS ===
const char*		Span::FullSpanException::what( void )		const throw() 	{ return "Span is full"; }
const char*		Span::NoSpanFoundException::what( void )	const throw() 	{ return "No span could be found"; }

// === ADD NUMBER ===
void	Span::addNumber( int n ) {
	if (_nbrs.size() == _nbrs.capacity())
		throw FullSpanException();
	else
		_nbrs.push_back(n);
}

// === LONGEST SPAN ===
int		Span::longestSpan( void ) {
	if (getNbrOfElements() < 2)
		throw NoSpanFoundException();
	else
		return abs(*std::max_element(_nbrs.begin(), _nbrs.end()) - *std::min_element(_nbrs.begin(), _nbrs.end()));
}

// === SHORTEST SPAN ===
int		Span::shortestSpan( void ) {
	if (getNbrOfElements() < 2)
		throw NoSpanFoundException();
	std::vector<int>::iterator	it;
	std::vector<int>	sorted(_nbrs);
	std::sort(sorted.begin(), sorted.end());
	int shortestSpan;
	for (it = sorted.begin(); it != sorted.end() - 1; ++it)
		shortestSpan = (it == sorted.begin()) ? abs(*it - *(it + 1)) : std::min(abs(*it - *(it + 1)), shortestSpan);
	return shortestSpan;
}