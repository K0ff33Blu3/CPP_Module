/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:36:53 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:43:07 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool				_signed;
	int	const			_gradeSign;
	int	const			_gradeExec;
public:
	AForm( void );
	AForm( std::string const name, int const sign_grade, int const exec_grade );
	AForm( AForm const & other );
	AForm& operator=( AForm const & other );
	virtual ~AForm();
	
	class GradeTooHighException : public std::exception {
	public:
		const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char*	what() const throw();
	};

	class FormNotSignedException : public std::exception {
	public:
		const char*	what() const throw();
	};
	
	std::string	const	getName() const;
	bool				isSigned() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	
	void				beSigned( Bureaucrat const & b );
	void				execute( Bureaucrat const & executor ) const;
	virtual void		action() const = 0;
};

std::ostream& operator<<( std::ostream& o, const AForm& f );

#endif