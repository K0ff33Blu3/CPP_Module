/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:18:23 by miricci           #+#    #+#             */
/*   Updated: 2026/03/23 18:43:00 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main( void ) {
	
	Bureaucrat	new_hire;
	Bureaucrat	chair_man("boss", 1);
	Bureaucrat	career_man("chad", 70);
	
	Form		basic_doc("Low risk", 150, 149);
	Form		medium_doc("Mid risk", 70, 60);
	Form		superimportant_doc("High risk", 1, 1);
	
	// OUTSTREAM TESTS
	std::cout << basic_doc << std::endl;
	std::cout << medium_doc << std::endl;
	std::cout << superimportant_doc << std::endl;
	
	// COPY CONSTRUCTOR TESTS
	Form copy(medium_doc);
	std::cout << copy << std::endl;
	
	// ASSIGNEMENT OPERATOR TESTS
	Form	other_copy;
	other_copy = copy;
	std::cout << other_copy << std::endl;
	
	// SIGN TEST
	new_hire.signForm(basic_doc);			// should sign
	new_hire.signForm(medium_doc);			// should throw exception
	new_hire.signForm(superimportant_doc);	// should throw exception
	
	career_man.signForm(basic_doc);			// should sign
	career_man.signForm(medium_doc);			// should sign
	career_man.signForm(superimportant_doc);	// should throw exception

	chair_man.signForm(basic_doc);			// should sign
	chair_man.signForm(medium_doc);			// should sign
	chair_man.signForm(superimportant_doc);	// should sign
}