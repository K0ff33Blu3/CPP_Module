/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:48:23 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:53:57 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : AForm("Presidential Pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & other ) : AForm(other), _target(other._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const & other ) {
	if (this != &other) {
		AForm::operator=(other);
		const_cast<std::string&>(_target) = other._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::action() const {
	std::cout << _target << " has been pardoned by Zaphod Beebleborx." << std::endl;
}