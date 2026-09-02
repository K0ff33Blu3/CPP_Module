#ifndef RPN_HPP
# define RPN_HPP

# include <exception>
# include <string>
# include <iostream> 
# include <stack>
# include <algorithm>

class RPN
{
	private:
		static std::stack<int> _evalStack;

		RPN( void );
		RPN( const RPN& other );
		RPN& operator=( const RPN& other );
		~RPN( void );

		static void parseRawString( std::string& raw );

		struct Entry {
			char	op;
			int (*fn)(int, int);
		};

		static const Entry table[4];

		class TooFewFactors : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class TooManyFactors : public std::exception
		{
			public:
				const char *what() const throw();
		};

	public:
		static int evaluate( std::string& raw );
};

int add( int a, int b );
int subtract( int a, int b );
int multiply( int a, int b );
int divide( int a, int b );

#endif