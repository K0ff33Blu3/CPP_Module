/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:01:37 by miricci           #+#    #+#             */
/*   Updated: 2026/02/27 17:30:42 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : raw_value(0) {
	
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int nbr ) : raw_value(nbr << bp) {
	
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float nbr ) : raw_value(roundf(nbr * (1 << bp))) {

	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& other ) : raw_value(other.raw_value) {
	
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed& other) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->raw_value = other.raw_value;
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

float	Fixed::toFloat( void ) const {
	
	return ((float)raw_value / (1 << bp));
}

int	Fixed::toInt( void ) const {
	
	return (raw_value >> bp);
}

std::ostream& operator<<( std::ostream& o, const Fixed& f ) {
	
	o << f.toFloat();
	return (o);
}

bool	Fixed::operator>( const Fixed& other ) {
	
	int	cbp;
	
	if (bp >= other.bp)
		cbp = bp;
	else
		cbp = other.bp;
	
	int	shiftedValue = raw_value << (cbp - bp);
	int	shiftedOtherValue = other.raw_value << (cbp - other.bp);
	
	return (shiftedValue > shiftedOtherValue);
}

bool	Fixed::operator>=( const Fixed& other ) {
	
	int	cbp;
	
	if (bp >= other.bp)
		cbp = bp;
	else
		cbp = other.bp;
	
	int	shiftedValue = raw_value << (cbp - bp);
	int	shiftedOtherValue = other.raw_value << (cbp - other.bp);
	
	return (shiftedValue >= shiftedOtherValue);
}

bool	Fixed::operator<( const Fixed& other ) {
	
	int	cbp;
	
	if (bp >= other.bp)
		cbp = bp;
	else
		cbp = other.bp;
	
	int	shiftedValue = raw_value << (cbp - bp);
	int	shiftedOtherValue = other.raw_value << (cbp - other.bp);
	
	return (shiftedValue < shiftedOtherValue);
}

bool	Fixed::operator<=( const Fixed& other ) {
	
	int	cbp;
	
	if (bp >= other.bp)
		cbp = bp;
	else
		cbp = other.bp;
	
	int	shiftedValue = raw_value << (cbp - bp);
	int	shiftedOtherValue = other.raw_value << (cbp - other.bp);
	
	return (shiftedValue <= shiftedOtherValue);	
}

bool	Fixed::operator==( const Fixed& other ) {
	
	int	cbp;
	
	if (bp >= other.bp)
		cbp = bp;
	else
		cbp = other.bp;
	
	int	shiftedValue = raw_value << (cbp - bp);
	int	shiftedOtherValue = other.raw_value << (cbp - other.bp);
	
	return (shiftedValue == shiftedOtherValue);
}

bool	Fixed::operator!=( const Fixed& other ) {
	
	int	cbp;
	
	if (bp >= other.bp)
		cbp = bp;
	else
		cbp = other.bp;
	
	int	shiftedValue = raw_value << (cbp - bp);
	int	shiftedOtherValue = other.raw_value << (cbp - other.bp);
	
	return (shiftedValue != shiftedOtherValue);
}

Fixed	Fixed::operator+( const Fixed& other ) const {
	
	Fixed	res;

	int		shiftedRaw = other.raw_value << (bp - other.bp);
	res.raw_value = raw_value + shiftedRaw;
	return (res);		
}

Fixed	Fixed::operator-( const Fixed& other ) const {
	
	Fixed	res;

	int		shiftedRaw = other.raw_value << (bp - other.bp);
	res.raw_value = raw_value - shiftedRaw;
	return (res);		
}

Fixed	Fixed::operator*( const Fixed& other ) const {
	
	Fixed	res;

	
	return (res);		
}

Fixed	Fixed::operator/( const Fixed& other ) const {
	
	Fixed	res;

	int		shiftedRaw = other.raw_value << (bp - other.bp);
	res.raw_value = raw_value / shiftedRaw;
	return (res);		
}