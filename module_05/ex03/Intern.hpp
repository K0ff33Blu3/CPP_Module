#include <sstream>
#include <cctype>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
private:
	static AForm*	createPresidentialPardonForm( std::string const target );
	static AForm*	createRobotomyRequestForm( std::string const target );
	static AForm*	createShrubberyCreationForm( std::string const target );

	typedef	AForm* (*formCreator)( std::string const );

	struct formTable {
		std::string		request;
		formCreator		create;
	};

	formTable _table[3];

	class UnknownFormException : public std::exception
	{
	public:
		const char*	what() const throw();
	};
	
public:
	Intern( void );
	Intern( Intern const & other );
	Intern& operator=( Intern const & other );
	~Intern();

	AForm*	makeForm( std::string name, std::string target );
};
