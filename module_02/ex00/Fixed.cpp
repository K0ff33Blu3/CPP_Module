/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:01:37 by miricci           #+#    #+#             */
/*   Updated: 2026/02/24 11:38:48 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : raw_value(0) {
	
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& other ) {
	
	std::cout << "Copy constructor called" << std::endl;
	raw_value = other.getRawBits();
	return ;
}

Fixed& Fixed::operator=(const Fixed& other) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->raw_value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_value);
}

void	Fixed::setRawBits( int const raw ) {
	
	std::cout << "setRawBits member function called" << std::endl;
	this->raw_value = raw;
	return ;
}