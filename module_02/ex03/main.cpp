/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:40:16 by miricci           #+#    #+#             */
/*   Updated: 2026/02/28 17:14:57 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) - Fixed( 2.23f ) );
	Fixed const d( Fixed( 1.05f ) * Fixed( 4 ) );
	Fixed const e( Fixed( 12.45f ) / Fixed( 0 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( d, e ) << std::endl;
	
	return (0);
}