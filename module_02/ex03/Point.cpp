/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:20:30 by miricci           #+#    #+#             */
/*   Updated: 2026/02/28 18:01:38 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0) {
	
	return ;
}

Point::Point( const float x, const float y ) : x(x), y(y) {
	
	return ;
}

Point::Point( const Point& other ) : x(other.x), y(other.y) {
	
	return ;
}

Point& Point::operator=( const Point& other ) {
	
	if (this->x != other.x)
		this->x = other.x;
	if (this->y != other.y)
		this->y = other.y;
	return (*this);
}

Point::~Point() {

	return ;
}