#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc == 1)
		return -1;
	try
	{
		PMergeMe pm(++argv, argc - 1);
		pm.pmerge();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}