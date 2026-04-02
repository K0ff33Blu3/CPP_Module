/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:18:23 by miricci           #+#    #+#             */
/*   Updated: 2026/03/19 17:28:09 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main( void ) {
	
	Bureaucrat	new_hire;
	Bureaucrat	chair_man("boss", 1);
	Bureaucrat	career_man("chad", 50);
	
	// OUTSTREAM TESTS
	std::cout << new_hire << std::endl;
	std::cout << chair_man << std::endl;
	std::cout << career_man << std::endl;
	
	// COPY CONSTRUCTOR TESTS
	Bureaucrat coworker(career_man);
	std::cout << coworker << std::endl;
	
	// ASSIGNEMENT OPERATOR TESTS
	Bureaucrat	new_boss;
	new_boss = chair_man;
	std::cout << new_boss << std::endl;
	
	// EXCEPTION TESTS
	std::cout << career_man << std::endl; // should print grade 50
	career_man.increment_grade();
	std::cout << career_man << std::endl; // should print grade 49
	career_man.decrement_grade();
	std::cout << career_man << std::endl; // should print grade 50
	
	std::cout << chair_man << std::endl; // should print grade 1
	chair_man.increment_grade();		 //	should throw GradeTooHigh
	std::cout << chair_man << std::endl; // should print grade 1
	
	std::cout << new_hire << std::endl;	// should print grade 150
	new_hire.decrement_grade();			//	should throw GradeTooLow	
	std::cout << new_hire << std::endl; // should print grade 150
}