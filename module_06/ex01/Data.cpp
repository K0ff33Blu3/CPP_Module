/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:34:57 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 16:35:20 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( int x, int y ) : _x(x), _y(y) {}

Data::Data( Data const & other ) : _x(other._x), _y(other._y) {}

Data& Data::operator=( Data const & other ) {
	if (this != &other) {
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Data::~Data( void ) {}

std::ostream&	operator<<( std::ostream& o, Data const & d ) {
	o << "( " << d.getX() << ", " << d.getY() << " )";
	return o;
}

int		Data::getX( void ) const { return _x; }

int		Data::getY( void ) const { return _y; }