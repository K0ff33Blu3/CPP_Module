/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:36:53 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:31:08 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class	Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int	const			_gradeSign;
	int	const			_gradeExec;
public:
	Form( void );
	Form( std::string const name, int const sign_grade, int const exec_grade );
	Form( Form const & other );
	Form& operator=( Form const & other );
	~Form();
	
	GradeTooHighException	tooHigh;
	GradeTooLowException	tooLow;
	
	std::string	const	getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	
	void				beSigned( Bureaucrat const &b );
	
};

std::ostream& operator<<( std::ostream& o, const Form& f );

#endif