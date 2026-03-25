/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 12:46:25 by miricci           #+#    #+#             */
/*   Updated: 2026/03/09 11:08:15 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap() {

	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << GRAY << "DiamondTrap constructor called." << RESET << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap(), ScavTrap() {

	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << GRAY << "DiamondTrap constructor called." << RESET << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other._name ), FragTrap(), ScavTrap() {
	
	_hitpoints = other._hitpoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << GRAY << "DiamondTrap copy constructor called." << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other ) {

	if (this != &other ) {
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << GRAY << "DiamondTrap assignment operator called." << RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	
	std::cout << GRAY << "DiamondTrap destructor called." << RESET << std::endl;	
}

void	DiamondTrap::whoAmI( void ) {
	
	std::cout << "I am " + _name + ", son of " + ClapTrap::_name + "! Who dares ask me?" << std::endl;
}
