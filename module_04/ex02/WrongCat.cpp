/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:50:44 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 16:18:41 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	
	std::cout << GRAY << "WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal(other) {

	std::cout << GRAY << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {

	(void)other;
	std::cout << GRAY << "WrongCat assignement operator called" << RESET << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {

	std::cout << GRAY << "WrongCat destructor called" << RESET << std::endl;
}