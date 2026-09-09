#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>

# include <vector>
# include <deque>
# include <algorithm>
# include <sys/time.h>

class PMergeMe
{
	private:
		std::vector<int> 	v;
		std::deque<int>		d;

		double vTime;
		double dTime;
		
	public:
		PMergeMe( void );
		PMergeMe( char **nbr, int size );
		PMergeMe( const PMergeMe& other );
		PMergeMe& operator=( const PMergeMe& other );
		~PMergeMe( void );

		class Chrono
		{
			public:
    			Chrono( void );
				Chrono( const Chrono & other );
				Chrono& operator=( const Chrono & other);
				~Chrono( void );
				
    			double stop( void );

			private:
    			struct timeval _start;
    			struct timeval _stop;
		};

		class NumbersException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class NumberTooLarge : public std::exception
		{
			public:
				const char *what() const throw();
		};

		void	pmerge( void );
};

template <typename Container>
static void fordJohnson(Container& data);

bool isDigitOnly(std::string s);

#endif