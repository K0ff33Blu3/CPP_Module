/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:41:03 by miricci           #+#    #+#             */
/*   Updated: 2026/03/09 11:04:29 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GRAY << "ScavTrap constructor called." << RESET << std::endl;
}

ScavTrap::ScavTrap( void ) : ClapTrap() {
	 
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GRAY << "ScavTrap constructor called." << RESET << std::endl; 
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other._name ) {
	
	_hitpoints = other._hitpoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << GRAY << "ScavTrap copy constructor called." << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {

	if (this != &other ) {
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << GRAY << "ScavTrap assignment operator called." << RESET << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	
	std::cout << GRAY << "ScavTrap destructor called." << RESET << std::endl;
}


void	ScavTrap::guardGate() {
	
	std::cout << _name << " is now in a Gate keeper mode" << std::endl;
}
