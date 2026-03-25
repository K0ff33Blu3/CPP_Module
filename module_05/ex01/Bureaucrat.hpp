/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:27:23 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:11:42 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class	Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat( void );
	Bureaucrat( const std::string name, int grade );
	Bureaucrat( const Bureaucrat& other );
	Bureaucrat&	operator=( const Bureaucrat& other );
	~Bureaucrat();
	
	std::string	getName() const;
	int			getGrade() const;
	
	void	increment_grade();
	void	decrement_grade();
	
	GradeTooHighException	tooHigh;
	GradeTooLowException	tooLow;
	
	void	signForm( Form& f );
};

std::ostream& operator<<( std::ostream& o, const Bureaucrat& other );

#endif