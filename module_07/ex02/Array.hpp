/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:45:00 by miricci           #+#    #+#             */
/*   Updated: 2026/04/04 15:53:54 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>

template <typename T>
class Array
{
	private:
		T*				_data;
		unsigned int	_size;
	public:
		Array( void );
		Array( unsigned int n );
		Array( const Array& other );
		Array&	operator=( const Array& other );
		T&		operator[]( unsigned int n );
		~Array( void );

		unsigned int	size( void ) const;
		T*				getData( void ) const;
};

template <typename T>
std::ostream& operator<<( std::ostream& o, Array<T> const & array );
# include "Array.tpp"

#endif