/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:35:14 by miricci           #+#    #+#             */
/*   Updated: 2026/03/05 17:44:39 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	 
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GRAY << "FragTrap constructor called." << RESET << std::endl; 
}

FragTrap::~FragTrap() {
	
	std::cout << GRAY << "Destructor called." << RESET << std::endl;
}

void FragTrap::highFiveGuys( void ) {
	
	std::cout << "High Fiveeeee!!!" << std::endl;
}
