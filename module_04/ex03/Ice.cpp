/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:33:34 by miricci           #+#    #+#             */
/*   Updated: 2026/03/09 14:41:34 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ) : AMateria("ice") {
	
	// std::cout << GRAY << "Ice constructor called" << RESET << std::endl;
}

Ice::Ice( const Ice& other ) : AMateria(other) {

	// std::cout << GRAY << "Ice copy constructor called" << RESET << std::endl;
}

Ice&	Ice::operator=( const Ice& other ) {
	
	if (this != &other) {
		AMateria::operator=(other);
		
	}
	// std::cout << GRAY << "Ice assignment operator called" << RESET << std::endl;
	return (*this);
}

Ice::~Ice() {
	// std::cout << GRAY << "Ice destructor called" << RESET << std::endl;
}

AMateria* Ice::clone() const {
	
	// std::cout << GRAY << "Ice::clone() function called" << RESET << std::endl;
	return (new Ice);
}

void	Ice::use( ICharacter& target ) {
	
	// std::cout << GRAY << "Ice::use() function called" << RESET << std::endl;
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}