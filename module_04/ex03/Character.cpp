/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 09:37:34 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 13:03:45 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ) : _name(NULL) {
	
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << GRAY << "Character constructor called" << RESET << std::endl;
}

Character::Character( std::string name ) : _name(name) {
	
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << GRAY << "Character constructor called" << RESET << std::endl;
}

Character::Character( const Character& other ) : _name(other._name) {

	for (size_t i = 0; i < 4; i++)
		_inventory[i] = other._inventory[i]->clone();
	std::cout << GRAY << "Character copy constructor called" << RESET << std::endl;
}

Character&	Character::operator=( const Character& other ) {

	if (this != &other) {
		
		_name = other._name;
		for (size_t i = 0; i < 4; i++) {
			if (_inventory[i]) {
				delete	_inventory[i];
				_inventory[i] = other._inventory[i]->clone();
			}
		}
	}
	std::cout << GRAY << "Character assignment operator called" << RESET << std::endl;
	return (*this);
}

Character::~Character() {
	
	for (size_t i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << GRAY << "Character destructor called" << RESET << std::endl;
}

std::string const &		Character::getName() const {
	
	std::cout << GRAY << "Character::getName() function called" << RESET << std::endl;
	return (_name);
}

void	Character::equip( AMateria* m ) {

	if (!m)
		return ;
	std::cout << GRAY << "Character::equip() function called" << RESET << std::endl;
	for (size_t i = 0; i < 4; i++) {
		
		if (!_inventory[i]) {
			_inventory[i] = m->clone();
			return ;
		}
	}
}

void	Character::unequip( int idx ) {
	
	if (idx < 0 || idx > 3)
		return ;
	std::cout << GRAY << "Character::unequip() function called" << RESET << std::endl;
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target ) {

	if (idx < 0 || idx > 3 )
		return ;
	std::cout << GRAY << "Character::use() function called" << RESET << std::endl;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
