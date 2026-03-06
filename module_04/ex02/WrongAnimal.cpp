/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:46:33 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:28:12 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	
	std::cout << GRAY << "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {

	(void)other;
	std::cout << GRAY << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {

	(void)other;
	std::cout << GRAY << "WrongAnimal assignement operator called" << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {

	std::cout << GRAY << "WrongAnimal destructor called" << RESET << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	
	std::cout << "BLBLBLLBLBLBLBLBLBLB" << std::endl;
}