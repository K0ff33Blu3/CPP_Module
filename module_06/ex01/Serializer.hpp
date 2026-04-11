/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:22:29 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 16:32:54 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>

class	Data;

class Serializer
{
	private:
		Serializer( void );
		Serializer( const Serializer& other );
		Serializer& operator=( const Serializer& other );
		~Serializer( void );

	public:
		static uintptr_t	serialize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );
};

#endif