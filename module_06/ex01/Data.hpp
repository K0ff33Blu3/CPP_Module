/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:34:45 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 16:31:43 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		int	_x;
		int	_y;

	public:
		Data( int x, int y );
		Data( const Data& other );
		Data& operator=( const Data& other );
		~Data( void );

		int	 getX( void ) const ;
		int	 getY( void ) const ;
};

std::ostream&	operator<<( std::ostream& o, Data const & d );



#endif