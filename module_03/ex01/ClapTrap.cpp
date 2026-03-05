/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:27:49 by miricci           #+#    #+#             */
/*   Updated: 2026/03/05 17:30:42 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	
	std::cout << GRAY << "ClapTrap constructor called." << RESET << std::endl;
}

ClapTrap::ClapTrap( ClapTrap& other ) : _name(other._name), _hitpoints(other._hitpoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {

	std::cout << GRAY << "ClapTrap copy constructor called." << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=( ClapTrap& other ) {
	
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {

	std::cout << GRAY << "Destructor called." << RESET << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	
	if (_hitpoints > 0 && _energyPoints > 0) {
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << _name << " takes damage of " << amount << std::endl;
	_hitpoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (_energyPoints > 0) {
		
		std::cout << _name << " heals of " << amount << " energy points " << std::endl;
		_hitpoints += amount;
	}
}
