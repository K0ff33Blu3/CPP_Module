/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:53:09 by miricci           #+#    #+#             */
/*   Updated: 2026/03/07 07:54:52 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << GRAY << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal( const Animal& other ) {
	
	type = other.type;
	std::cout << GRAY << "Animal copy constructor called" << RESET << std::endl;
}

Animal&	Animal::operator=( const Animal& other ) {

	if (this != &other)
		type = other.type;
	std::cout << GRAY << "Animal assignement operator called" << RESET << std::endl;
	return (*this);
}

Animal::~Animal( void ) {

	std::cout << GRAY << "Animal destructor called" << RESET << std::endl;
}

void	Animal::makeSound( void ) const {

	std::cout << "BUHYVFTGBNJKGTYCFVHGBJJH" << std::endl;
}

std::string	Animal::getType() const {
	
	return (type);
}

void	Animal::setType( const std::string str ) {
	
	type = str;
}