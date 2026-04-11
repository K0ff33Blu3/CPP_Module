/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:25:10 by miricci           #+#    #+#             */
/*   Updated: 2026/04/01 16:10:08 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) {}

Serializer::Serializer( Serializer const & other ) { (void)other; }

Serializer& Serializer::operator=( Serializer const & other ) { (void)other; return *this; }

Serializer::~Serializer( void ) {}


uintptr_t	Serializer::serialize( Data* ptr ) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data*>(raw);
}