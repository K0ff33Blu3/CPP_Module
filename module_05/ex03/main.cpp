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
#include "Intern.hpp"

int	main( void )
{
    Intern		boy;
    Bureaucrat	low("New hire", 136);
    Bureaucrat	mid("Manager", 45);
    Bureaucrat	high("President", 1);

    AForm*	f1 = NULL;
    AForm*	f2 = NULL;
    AForm*	f3 = NULL;
    AForm*	f4 = NULL;

    try {
        f1 = boy.makeForm("shrubbery creation", "office");
        low.signForm(*f1);
        low.executeForm(*f1);

        f2 = boy.makeForm("robotomy request", "Mario");
        mid.signForm(*f2);
        mid.executeForm(*f2);

        f3 = boy.makeForm("presidential pardon", "Jack Sparrow");
        high.signForm(*f3);
        high.executeForm(*f3);

        f4 = boy.makeForm("blblblblblblblbl", "nonna");
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    delete f1;
    delete f2;
    delete f3;
    delete f4;

    return (0);
}