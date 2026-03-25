/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:36:36 by miricci           #+#    #+#             */
/*   Updated: 2026/03/09 14:40:03 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) {
	// std::cout << GRAY << "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria( const std::string& type ) : _type(type) {
	// std::cout << GRAY << "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria( const AMateria& other ) : _type(other._type) {
	// std::cout << GRAY << "AMateria copy constructor called" << RESET << std::endl;
}

AMateria& AMateria::operator=( const AMateria& other ) {
	
	if (this != &other) {
		_type = other._type;
	}
	// std::cout << GRAY << "AMateria assignment operator called" << RESET << std::endl;
	return (*this);
}


AMateria::~AMateria( void ) {
	// std::cout << GRAY << "AMateria destructor called" << RESET << std::endl;
}

const std::string& AMateria::getType( void ) const {
	
	return (_type);
}

void	AMateria::use( ICharacter& target ) {
	
	(void)target;
	// std::cout << GRAY << "AMateria::use() function called" << RESET << std::endl;
}
