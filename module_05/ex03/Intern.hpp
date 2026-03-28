#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
private:
	typedef	AForm::AForm 
	struct formTable
	{
		std::string request;
		AForm&		formKind;
	};
	
	formTable _table[3];
public:
	Intern( void );
	Intern( Intern const & other );
	Intern& operator=( Intern const & other );
	~Intern();


	AForm&	makeForm( std::string name, std::string target );
};
