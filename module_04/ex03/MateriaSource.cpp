/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:08:55 by miricci           #+#    #+#             */
/*   Updated: 2026/03/08 12:28:11 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	
	std::cout << GRAY << "MateriaSource constructor called" << RESET << std::endl;
	for (size_t i = 0; i < 4; i++)
		_mat[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << GRAY << "MateriaSource copy constructor called" << RESET << std::endl;
	for (size_t i = 0; i < 4; i++)
		_mat[i] = other._mat[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << GRAY << "MateriaSource assignment operator called" << RESET << std::endl;
	if (this != &other) {
		for (size_t i = 0; i < 4; i++) {
			delete _mat[i];
			_mat[i] = other._mat[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		if (_mat[i])
			delete _mat[i];
	std::cout << GRAY << "MateriaSource destructor called" << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	size_t i;
	for (i = 0; i < 4; i++)
	{

		if (!_mat[i])
			break;
		if (i == 3)
		{
			std::cout << "No more space in MateriaSource" << std::endl;
			return;
		}
	}
	_mat[i] = m;
	std::cout << GRAY << "MateriaSource::learnMateria() function called" << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	size_t i;
	for (i = 0; i < 4; i++)
	{
		if (_mat[i]->getType() == type)
			return (_mat[i]->clone());
	}
	std::cout << GRAY << "MateriaSource::createMateria function called" << RESET << std::endl;
	return (0);
}