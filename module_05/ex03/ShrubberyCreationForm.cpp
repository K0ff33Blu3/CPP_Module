/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:27:21 by miricci           #+#    #+#             */
/*   Updated: 2026/03/27 17:55:59 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery Creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & other ) : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const & other ) {
	if (this != &other) {
		AForm::operator=(other);
		const_cast<std::string&>(_target) = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::action() const {
	std::string filename = _target + "_shrubbery";
	try {
		std::ofstream outfile(filename.c_str());
		outfile << "          &&& &&  & &&" << std::endl;
		outfile << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
		outfile << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		outfile << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
		outfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		outfile << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		outfile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		outfile << "     &&     \\|||" << std::endl;
		outfile << "             |||" << std::endl;
		outfile << "             |||" << std::endl;
		outfile << "             |||" << std::endl;
		outfile << "       , -=-~  .-^- _" << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}