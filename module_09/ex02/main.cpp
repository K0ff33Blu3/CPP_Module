#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	try
	{
		PMergeMe pm(++argv, argc - 1);
		if (argc == 1)
			throw PMergeMe::NumbersException();
		pm.pmerge();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}