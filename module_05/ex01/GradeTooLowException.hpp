/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:40:06 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:14:45 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

# include <exception>

class GradeTooLowException : public std::exception
{
public:
	// GradeTooLowException();
	// ~GradeTooLowException();
	
	const char*	what() const throw();
};

#endif