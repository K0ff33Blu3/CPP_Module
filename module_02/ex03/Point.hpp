/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:20:22 by miricci           #+#    #+#             */
/*   Updated: 2026/03/03 14:42:30 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed		_x;
		const Fixed		_y;
		
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point& other );
		Point& operator=( const Point& other );
		~Point();
		
		const Fixed getX();
		const Fixed getY();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
