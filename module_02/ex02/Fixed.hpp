/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:01:07 by miricci           #+#    #+#             */
/*   Updated: 2026/02/28 16:41:51 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	raw_value;
		static const int	bp = 8;
				
	public:
		Fixed( void );
		Fixed( const int nbr );
		Fixed( const float nbr );
		Fixed( const Fixed& other );
		Fixed& operator=( const Fixed& other );
		~Fixed( void );
		
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		bool	operator>( const Fixed& other ) const ;
		bool	operator<( const Fixed& other ) const ;
		bool	operator>=( const Fixed& other ) const ;
		bool	operator<=( const Fixed& other ) const ;
		bool	operator==( const Fixed& other ) const ;
		bool	operator!=( const Fixed& other ) const ;
		
		Fixed	operator+( const Fixed& other ) const;
		Fixed	operator-( const Fixed& other ) const;
		Fixed	operator*( const Fixed& other ) const;
		Fixed	operator/( const Fixed& other ) const;
		
		Fixed&	operator++( void );
		Fixed&	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		
		static Fixed&	min( Fixed& a, Fixed& b );
		static const Fixed&	min( const Fixed& a, const Fixed& b );
		static Fixed&	max( Fixed& a, Fixed& b );
		static const Fixed&	max( const Fixed& a, const Fixed& b );
};

std::ostream& operator<<( std::ostream& o, const Fixed& f );

#endif