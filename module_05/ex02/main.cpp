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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main( void ) {
	
	try
	{
		Bureaucrat	new_hire("Newbie", 151);
		Bureaucrat	chair_man("Boss", 1);
		Bureaucrat	career_man("Chad", 70);
		
		PresidentialPardonForm		pp_doc("Arthur Dent");
		RobotomyRequestForm			rr_doc("Ford Prefect");
		ShrubberyCreationForm		sc_doc("home");
		
		// OUTSTREAM TESTS
		std::cout << sc_doc << std::endl;
		std::cout << rr_doc << std::endl;
		std::cout << pp_doc << std::endl;
		
		// COPY CONSTRUCTOR TESTS
		RobotomyRequestForm copy(rr_doc);
		std::cout << copy << std::endl;
		
		// ASSIGNEMENT OPERATOR TESTS
		ShrubberyCreationForm	other_copy("");
		other_copy = sc_doc;
		std::cout << other_copy << std::endl;
		
		// SIGN TEST
		new_hire.signForm(sc_doc);			// should sign
		new_hire.signForm(rr_doc);			// should throw exception
		new_hire.signForm(pp_doc);			// should throw exception
		
		career_man.signForm(sc_doc);		// should sign
		career_man.signForm(rr_doc);		// should sign
		career_man.signForm(pp_doc);		// should throw exception

		new_hire.executeForm(sc_doc);		// should throw exception grade too low
		new_hire.executeForm(rr_doc);		// should throw exception grade too low
		new_hire.executeForm(pp_doc);		// should throw exception grade too low

		career_man.executeForm(sc_doc);		// should execute
		career_man.executeForm(rr_doc);		// should throw exception grade too low

		chair_man.executeForm(rr_doc);		// should execute
		chair_man.executeForm(pp_doc);		// should throw exception form not signed

		chair_man.signForm(pp_doc);			// should sign
		chair_man.executeForm(pp_doc);		// should execute
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}