/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:42:28 by miricci           #+#    #+#             */
/*   Updated: 2026/03/19 17:24:03 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "GradeTooHighException.hpp"

// GradeTooHighException::GradeTooHighException() {
	
// }

// GradeTooHighException::~GradeTooHighException() {
	
// }

const char*	GradeTooHighException::what() const throw() {
	
	return ("Grade Too High");
}