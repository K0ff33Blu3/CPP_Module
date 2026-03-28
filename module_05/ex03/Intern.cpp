#include "Intern.hpp"

Intern::Intern( void ) {
	Intern::_table[0].request = "shrubbery creation"; Intern::_table[0].formKind = ShrubberyCreationForm()
}

Intern::Intern( Intern const & other ) {}

Intern& Intern::operator=( Intern const & other ) {
	return (*this);
}

Intern::~Intern( void ) {}

AForm&	Intern::makeForm( std::string name, std::string target ) {
	std::cout << "Intern creates " << 
}

