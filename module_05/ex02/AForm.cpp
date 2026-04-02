/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:43:59 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:41:48 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name(""), _signed(false), _gradeSign(1), _gradeExec(1) {}

AForm::AForm( std::string const name, int const sign_grade, int const exec_grade ) : _name(name), _signed(false), _gradeSign(isValidGrade(sign_grade)), _gradeExec(isValidGrade(exec_grade)) {}

AForm::~AForm() {}

AForm::AForm( AForm const & other ) : _name(other._name), _signed(other._signed), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec) {}

AForm&	AForm::operator=( AForm const & other ) {
	if (this != &other) {
		const_cast<std::string&>(_name) = other._name;
		_signed = other._signed;
		const_cast<int&>(_gradeSign) = other._gradeSign;
		const_cast<int&>(_gradeExec) = other._gradeExec;
	}
	return (*this);
}

std::string	const		AForm::getName() const {
	return (_name);
}

bool				AForm::isSigned() const {
	return (_signed);
}

int			AForm::getGradeSign() const {
	return (_gradeSign);
}

int			AForm::getGradeExec() const {
	return (_gradeExec);
}

void		AForm::beSigned( Bureaucrat const & b ) {
	if (b.getGrade() > _gradeSign)
		throw GradeTooLowException();
	_signed = true;
}

int		AForm::isValidGrade( int grade ) const {
	if (grade < 1)		{ throw GradeTooHighException(); }
	else if (grade > 150)	{ throw GradeTooLowException(); }
	return grade;
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char*		AForm::FormNotSignedException::what() const throw() {
	return ("form not signed");
}

void		AForm::execute( Bureaucrat const & executor ) const {
	if (executor.getGrade() > _gradeExec)
		throw GradeTooLowException();
	if (!this->isSigned())
		throw FormNotSignedException();
	this->action();
}

std::ostream& operator<<( std::ostream& o, const AForm& f ) {
	o << f.getName() << " form " << "(sign grade: " << f.getGradeSign() << ", execution grade: " << f.getGradeExec() << ")";
	return o;
}