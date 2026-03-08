/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:48:51 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 12:25:44 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("Cure") {
	
	std::cout << GRAY << "Cure constructor called" << RESET << std::endl;
}

Cure::Cure( const Cure& other ) : AMateria(other) {
	
	std::cout << GRAY << "Cure copy constructor called" << RESET << std::endl;
}

Cure&	Cure::operator=( const Cure& other ) {

	if (this != &other) {
		
		AMateria::operator=(other);
	}
	std::cout << GRAY << "Cure assignment operator called" << RESET << std::endl;
	return (*this);
}

Cure::~Cure() {
	std::cout << GRAY << "Cure destructor called" << RESET << std::endl;
}

AMateria* Cure::clone() const {
	
	std::cout << GRAY << "Cure::clone() function called" << RESET << std::endl;
	return (new Cure);
}

void	Cure::use( ICharacter& target ) {
	
	std::cout << GRAY << "Cure::use() function called" << RESET << std::endl;
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}