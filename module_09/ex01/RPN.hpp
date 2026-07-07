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
		static std::stack<char> _evalStack;

		RPN( void );
		RPN( const RPN& other );
		RPN& operator=( const RPN& other );
		~RPN( void );

		static void parseRawString( std::string& raw );

		void add( void );
		void subtract( void );
		void multiply( void );
		void divide( void );

		typedef void (RPN::*Operation)();

		struct Entry {
			char	op;
			Operation	fn;
		};

		static const Entry table[4];

		class TooFewFactors : public std::exception
		{
			public:
				const char *what() const throw();
		};

	public:
		static double evaluate( std::string& raw );
};

#endif