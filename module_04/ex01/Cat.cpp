/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:05:52 by miricci           #+#    #+#             */
/*   Updated: 2026/03/07 08:35:09 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal(), brain(new Brain()) {

	type = "Cat";
	std::cout << GRAY << "Cat constructor called" << RESET << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other), brain(new Brain(*other.brain)) {

	std::cout << GRAY << "Cat copy constructor called" << RESET << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {

	if (this != &other) {
		Animal::operator=(other);
		*brain = *other.brain;
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