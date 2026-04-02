/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:36:53 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:15:41 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

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
	
	class GradeTooHighException : public std::exception {
	public:
		const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char*	what() const throw();
	};
	
	std::string	const	getName() const;
	bool				isSigned() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	int					isValidGrade( int grade ) const;
	
	void				beSigned( Bureaucrat const &b );
};

std::ostream& operator<<( std::ostream& o, const Form& f );

#endif