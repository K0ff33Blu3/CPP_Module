/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:33:37 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:42:01 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << GRAY << "Brain constructor called" << RESET << std::endl;
}

Brain::Brain( const Brain& other ) {
	
	for (size_t i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	
	std::cout << GRAY << "Brain copy constructor called" << RESET << std::endl;
}

Brain&	Brain::operator=( const Brain& other ) {

	if (this != &other) {
		for (size_t i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	
	std::cout << GRAY << "Brain assignement operator called" << RESET << std::endl;
	return (*this);
}

Brain::~Brain( void ) {

	std::cout << GRAY << "Brain destructor called" << RESET << std::endl;
}