/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:40:29 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:14:39 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_HPP
# define GRADETOOHIGHEXCEPTION_HPP

# include <exception>

class GradeTooHighException : public std::exception
{
public:
	// GradeTooHighException();
	// ~GradeTooHighException();
	
	const char*	what() const throw();
};

#endif