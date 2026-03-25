/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:27:09 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:37:42 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(150) {
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade){
	if (_grade < 1 )
		throw tooHigh;
	else if ( _grade > 150)
		throw tooLow;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name), _grade(other._grade) {
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	if (this != &other) {
		
		const_cast<std::string&>(_name) = other._name;
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

std::string	Bureaucrat::getName( void ) const {
	return (_name);
}

int			Bureaucrat::getGrade( void ) const {
	return (_grade);
}

void		Bureaucrat::increment_grade( void ) {
	try {
		_grade--;
		if (_grade < 1)
			throw tooHigh;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::decrement_grade( void ) {
	try {
		_grade++;
		if (_grade > 150)
			throw tooLow;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::signForm( Form& f ) {
	try {
		f.beSigned(*this);
	}
	catch(const std::exception& e) {
		std::cerr << *this << " couldn't sign " << f << " because " << e.what() << '\n';
	}
	std::cout << *this << " signed " << f << std::endl;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& b ) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}