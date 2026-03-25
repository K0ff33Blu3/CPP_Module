/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:40:06 by miricci           #+#    #+#             */
/*   Updated: 2026/03/19 17:22:46 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

class GradeTooLowException : public std::exception
{
public:
	// GradeTooLowException();
	// ~GradeTooLowException();
	
	const char*	what() const throw();
};