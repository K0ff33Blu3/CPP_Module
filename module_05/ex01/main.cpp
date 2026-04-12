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
	try {
		Bureaucrat	new_hire;
		Bureaucrat	chair_man("Boss", 1);
		Bureaucrat	career_man("Chad", 50);

		Form		easy_doc("low risk", 150, 149);
		Form		medium_doc("mid risk", 70, 60);
		Form		superimportant_doc("high risk", 1, 1);

		std::cout << easy_doc << std::endl;
		std::cout << medium_doc << std::endl;
		std::cout << superimportant_doc << std::endl;
		
		new_hire.signForm(easy_doc);				// should sign
		new_hire.signForm(medium_doc);				// should throw exception
		new_hire.signForm(superimportant_doc);		// should throw exception
		
		career_man.signForm(easy_doc);				// should sign
		career_man.signForm(medium_doc);			// should sign
		career_man.signForm(superimportant_doc);	// should throw exception

		chair_man.signForm(easy_doc);				// should sign
		chair_man.signForm(medium_doc);				// should sign
		chair_man.signForm(superimportant_doc);		// should sign
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}