/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:01:37 by miricci           #+#    #+#             */
/*   Updated: 2026/03/03 14:44:39 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : raw_value(0) {

	return ;
}

Fixed::Fixed( const int nbr ) : raw_value(nbr << bp) {

	return ;
}

Fixed::Fixed( const float nbr ) : raw_value(roundf(nbr * (1 << bp))) {

	return ;
}

Fixed::Fixed( const Fixed& other ) : raw_value(other.raw_value) {

	return ;
}

Fixed& Fixed::operator=(const Fixed& other) {

	if (this != &other)
		this->raw_value = other.raw_value;
	return (*this);
}

Fixed::~Fixed( void ) {
	
	return ;
}

int		Fixed::getRawBits( void ) const {

	return (this->raw_value);
}

void	Fixed::setRawBits( int const raw ) {
	
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

bool	Fixed::operator>( const Fixed& other ) const {
	
	return (raw_value > other.raw_value);
}

bool	Fixed::operator>=( const Fixed& other ) const {
	
	return (raw_value >= other.raw_value);
}

bool	Fixed::operator<( const Fixed& other ) const {
	
	return (raw_value < other.raw_value);
}

bool	Fixed::operator<=( const Fixed& other ) const {
	
	return (raw_value <= other.raw_value);	
}

bool	Fixed::operator==( const Fixed& other ) const {
	
	return (raw_value == other.raw_value);
}

bool	Fixed::operator!=( const Fixed& other ) const {
	
	return (raw_value != other.raw_value);
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

	long long prod = (long long)raw_value * (long long)other.raw_value;
	res.setRawBits(prod >> bp);
	return (res);
}

Fixed	Fixed::operator/( const Fixed& other ) const {
		
	if (other.raw_value == 0)
	{
		std::cerr << "Math error" << std::endl;
		return ( Fixed() );
	}
	long long val = (long long)raw_value << bp;
	return ( Fixed((float)(val / other.raw_value )) );
}

Fixed&	Fixed::operator++( void ) {
	
	raw_value += 1;
	return ( *this );
}

Fixed&	Fixed::operator--( void ) {
	
	raw_value -= 1;
	return ( *this );
}

Fixed	Fixed::operator++( int ) {
	
	Fixed	ret( *this );

	raw_value += 1;
	return ( ret );	
}

Fixed	Fixed::operator--( int ) {
	
	Fixed	ret( *this );

	raw_value -= 1;
	return ( ret );	
}

Fixed&	Fixed::min( Fixed& a, Fixed& b ) {

	return ( a <= b ? a : b );
}

Fixed&	Fixed::max( Fixed& a, Fixed& b ) {

	return ( a >= b ? a : b );
}

const Fixed&	Fixed::min( const Fixed& a, const Fixed& b ) {

	return ( a <= b ? a : b );
}

const Fixed&	Fixed::max( const Fixed& a, const Fixed& b ) {

	return ( a >= b ? a : b );
}