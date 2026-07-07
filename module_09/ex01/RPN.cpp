#include "RPN.hpp"

const RPN::Entry RPN::table[4] = {
    { '+', &RPN::add },
    { '-', &RPN::subtract },
    { '*', &RPN::multiply },
    { '/', &RPN::divide }
};

RPN::RPN( void ) {}

RPN::RPN( RPN const & other ) { (void)other; }

RPN& RPN::operator=( RPN const & other ) {
	if (this != &other) {
		_evalStack = other._evalStack;
	}
	return *this;
}

RPN::~RPN( void ) {}

void RPN::parseRawString( std::string& raw ) {
	if (raw.find_first_not_of(" 1234567890+-*/") != std::string::npos)
		throw std::invalid_argument("character not valid.");
}

void RPN::add( void ) {
	for ()
}

double RPN::evaluate( std::string& raw ) {
	parseRawString(raw);
	raw.erase(std::remove(raw.begin(), raw.end(), ""), raw.end());
	for (std::string::iterator it = raw.begin(); it != raw.end(); ++it) {
		if (raw.find_first_not_of("1234567890") != std::string::npos)
			_evalStack.push(*it);
		else {
			if (_evalStack.size() < 2)
				throw TooFewFactors();
			else {
				for (int i = 0; i < 4; i++) {
					if (table[i].op == *it)
						table[i].fn;
				}
			}
			
		}
	}
	
}

const char *RPN::TooFewFactors::what() const throw() { return "too few factors."; }
