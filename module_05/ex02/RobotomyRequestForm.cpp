/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:45:19 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:53:51 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Robotomy Request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & other ) : AForm(other), _target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & other ) {
	if (this != &other) {
		AForm::operator=(other);
		const_cast<std::string&>(_target) = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::action() const {
	static bool	seeded = false;
	if (!seeded) {
		std::srand(std::time(NULL));
		seeded = true;
	}

	std::cout << "*** DRLDRLDRLDRLDRLDRLDRLDRL ***" << std::endl;
	
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << "'s robotomy has failed" << std::endl;		
}