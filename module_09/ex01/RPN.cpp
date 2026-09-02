#include "RPN.hpp"

std::stack<int> RPN::_evalStack;

const RPN::Entry RPN::table[4] = {
    { '+', &add },
    { '-', &subtract },
    { '*', &multiply },
    { '/', &divide }
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

int add( int a, int b )		{ return a + b ; }

int subtract( int a, int b )	{ return a - b ; }

int multiply( int a, int b )	{ return a * b ; }

int divide( int a, int b )		{ return a / b ; }

int RPN::evaluate( std::string& raw ) {
	parseRawString(raw);
	raw.erase(std::remove(raw.begin(), raw.end(), ' '), raw.end());
	for (std::string::iterator it = raw.begin(); it != raw.end(); ++it) {
		int val1, val2;
		if (std::isdigit(static_cast<unsigned char>(*it))) {
			_evalStack.push(*it - '0');
		}
		else {
			if (_evalStack.size() < 2)
				throw TooFewFactors();
			else {
				val2 = _evalStack.top();	_evalStack.pop();
				val1 = _evalStack.top();	_evalStack.pop();
				for (int i = 0; i < 4; i++) {
					if (table[i].op == *it)
						_evalStack.push(table[i].fn(val1, val2));
				}
			}
		}
	}
	if (_evalStack.size() > 1)
		throw TooManyFactors();
	return _evalStack.top();
}

const char *RPN::TooFewFactors::what() const throw() { return "too few factors."; }

const char *RPN::TooManyFactors::what() const throw() { return "too many factors."; }