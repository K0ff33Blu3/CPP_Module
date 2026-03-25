/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:42:12 by miricci           #+#    #+#             */
/*   Updated: 2026/03/19 17:23:54 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"
 
// GradeTooLowException::GradeTooLowException() {
	
// }

// GradeTooLowException::~GradeTooLowException() {
	
// }

const char*	GradeTooLowException::what() const throw() {
	
	return ("Grade Too Low");
}