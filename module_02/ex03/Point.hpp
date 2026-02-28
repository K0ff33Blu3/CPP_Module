/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:20:22 by miricci           #+#    #+#             */
/*   Updated: 2026/02/28 17:24:04 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed		x;
		const Fixed		y;
		
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point& other );
		Point& operator=( const Point& other );
		~Point();
};
