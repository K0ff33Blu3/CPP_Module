/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:35:14 by miricci           #+#    #+#             */
/*   Updated: 2026/03/06 14:41:56 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	 
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GRAY << "FragTrap constructor called." << RESET << std::endl; 
}

FragTrap::FragTrap( void ) : ClapTrap() {
	 
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GRAY << "FragTrap constructor called." << RESET << std::endl; 
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other._name ) {
	
	_hitpoints = other._hitpoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << GRAY << "FragTrap copy constructor called." << RESET << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& other ) {

	if (this != &other ) {
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << GRAY << "FragTrap assignment operator called." << RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	
	std::cout << GRAY << "FragTrap destructor called." << RESET << std::endl;
}

void FragTrap::highFiveGuys( void ) {
	
	std::cout << "High Fiveeeee!!!" << std::endl;
}
