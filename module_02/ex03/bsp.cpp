/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:20:52 by miricci           #+#    #+#             */
/*   Updated: 2026/03/03 14:45:07 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed		determinant( Point a, Point b, Point c ) {
	
	return (((b.getX() - a.getX()) * (c.getY() - a.getY())) - ((b.getY() - a.getY()) * (c.getX() - a.getX())));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	
	Fixed	detABP = determinant(a, b, point);
	Fixed	detBCP = determinant(b, c, point);
	Fixed	detCAP = determinant(c, a, point);

	if ((detABP * detBCP > 0) && (detABP * detCAP > 0))
		return (true);
	else
		return (false);
}