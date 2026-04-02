#include "Intern.hpp"

Intern::Intern( void ) {
	Intern::_table[0].request = "shrubbery creation"; Intern::_table[0].create = &Intern::createShrubberyCreationForm;
	Intern::_table[1].request = "robotomy request"; Intern::_table[1].create = &Intern::createRobotomyRequestForm;
	Intern::_table[2].request = "presidential pardon"; Intern::_table[2].create = &Intern::createPresidentialPardonForm;
}

Intern::Intern( Intern const & other ) { (void)other; }

Intern& Intern::operator=( Intern const & other ) {
	(void)other;
	return (*this);
}

Intern::~Intern( void ) {}

AForm*	Intern::createPresidentialPardonForm( std::string const target ) {
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::createRobotomyRequestForm( std::string const target ) {
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::createShrubberyCreationForm( std::string const target ) {
	return (new ShrubberyCreationForm(target));
}

const char*		Intern::UnknownFormException::what() const throw() {
	return ("unknown form");
}

AForm*	Intern::makeForm( std::string name, std::string target ) {
	std::string tmp = name;
	for (size_t i = 0; i < name.length(); i++) {
		tmp[i] = tolower(name[i]);
	}
	for (size_t i = 0; i < 3; i++) {
		if (tmp == _table[i].request) {
			AForm* f = _table[i].create(target);
			std::cout << "Intern creates " << *f << std::endl;
			return (f);
		}
	}
	throw UnknownFormException();
}