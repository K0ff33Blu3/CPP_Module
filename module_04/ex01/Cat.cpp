/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:05:52 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:48:46 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {

	type = "Cat";
	brain = new Brain;
	std::cout << GRAY << "Cat constructor called" << RESET << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other) {

	type = other.type;
	brain = other.brain;
	
	std::cout << GRAY << "Cat copy constructor called" << RESET << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {

	if (this != &other) {
		type = other.type;	
		brain = other.brain;
	}	
	
	std::cout << GRAY << "Cat assignement operator called" << RESET << std::endl;
	return (*this);
}

Cat::~Cat() {

	delete brain;
	std::cout << GRAY << "Cat destructor called" << RESET << std::endl;
}

void	Cat::makeSound( void ) const {
	
	std::cout << "MEEEOOOOOWWW" << std::endl;
}