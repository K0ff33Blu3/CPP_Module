/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:43:59 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:41:48 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(""), _signed(false), _gradeSign(1), _gradeExec(1) {
}

Form::Form( std::string const name, int const sign_grade, int const exec_grade ) : _name(name), _signed(false), _gradeSign(sign_grade), _gradeExec(exec_grade) {
}

Form::~Form() {
}

Form::Form( Form const & other ) : _name(other._name), _signed(other._signed), _gradeSign(other._gradeSign), _gradeExec(other._gradeSign) {
}

Form&	Form::operator=( Form const & other ) {
	if (this != &other) {
		const_cast<std::string&>(_name) = other._name;
		_signed = other._signed;
		const_cast<int&>(_gradeSign) = other._gradeSign;
		const_cast<int&>(_gradeExec) = other._gradeExec;
	}
	return (*this);
}

std::string	const		Form::getName() const {
	return (_name);
}

bool				Form::getSigned() const {
	return (_signed);
}

int			Form::getGradeSign() const {
	return (_gradeSign);
}

int			Form::getGradeExec() const {
	return (_gradeExec);
}

void				Form::beSigned( Bureaucrat const & b ) {
	if (b.getGrade() > _gradeSign)
		throw tooLow;
	_signed = true;
}

std::ostream& operator<<( std::ostream& o, const Form& f ) {
	o << f.getName() << " form " << "(sign grade: " << f.getGradeSign() << ", execution grade: " << f.getGradeExec() << ")";
	return o;
}