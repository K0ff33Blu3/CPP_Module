/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:27:09 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:13:15 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(150) {}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade) {
	
	if (_grade < 1 )
		throw GradeTooHighException();
	else if ( _grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	
	if (this != &other) {
		
		const_cast<std::string&>(_name) = other._name;
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}	

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
			throw GradeTooHighException();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::decrement_grade( void ) {
	
	try {
		_grade++;
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& b ) {

	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}