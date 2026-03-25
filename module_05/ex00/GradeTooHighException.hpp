/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:40:29 by miricci           #+#    #+#             */
/*   Updated: 2026/03/19 17:22:33 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

class GradeTooHighException : public std::exception
{
public:
	// GradeTooHighException();
	// ~GradeTooHighException();
	
	const char*	what() const throw();
};