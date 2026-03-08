/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:36:44 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 09:13:22 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	
	type = "Dog";
	brain = new Brain;
	std::cout << GRAY << "Dog constructor called" << RESET << std::endl;
}

Dog::Dog( const Dog& other ) : Animal(other) {
	
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << GRAY << "Dog copy constructor called" << RESET << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) {

	if (this != &other) {
		type = other.type;
		delete(brain);
		brain = new Brain(*other.brain);
	}
	std::cout << GRAY << "Dog assignement operator called" << RESET << std::endl;
	return (*this);
}

Dog::~Dog() {

	delete brain;
	std::cout << GRAY << "Dog destructor called" << RESET << std::endl;
}

void	Dog::makeSound( void ) const {
	
	std::cout << "WHOOOF" << std::endl;
}