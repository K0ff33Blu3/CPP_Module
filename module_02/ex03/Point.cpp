/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:20:30 by miricci           #+#    #+#             */
/*   Updated: 2026/03/03 14:42:59 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
	
	return ;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
	
	return ;
}

Point::Point( const Point& other ) : _x(other._x), _y(other._y) {
	
	return ;
}

Point& Point::operator=( const Point& other ) {
	
	(void)other;
	std::cerr << "Impossible to modify const values." << std::endl;
	return (*this);
}

Point::~Point() {

	return ;
}

const Fixed	Point::getX( void ) {
	
	return (_x);
}

const Fixed	Point::getY( void ) {
	
	return (_y);
}