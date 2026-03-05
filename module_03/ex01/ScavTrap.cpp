/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:41:03 by miricci           #+#    #+#             */
/*   Updated: 2026/03/05 17:29:49 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	
	std::cout << GRAY << "ScavTrap constructor called." << RESET << std::endl;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	
	std::cout << GRAY << "ScavTrap destructor called." << RESET << std::endl;
}

void	ScavTrap::guardGate() {
	
	std::cout << _name << " is now in a Gate keeper mode" << std::endl;
}
