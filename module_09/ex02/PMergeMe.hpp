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
		PMergeMe( int *nbr, int size );
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

		void	pmerge( void );
};

template <typename Container>
static void fordJohnson(Container& data);

#endif