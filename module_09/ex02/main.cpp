#include "PMergeMe.hpp"

int main(int argc, char **argv) {
	if (argc == 1)
		return -1;
	int *ptr = new int[argc - 1];
	for (int i = 0; i < argc - 1; i++) {
		std::istringstream	iss(argv[i + 1]);
		char			leftover;
		iss >> ptr[i]; iss >> leftover;
		if (!leftover)
			return  delete[] ptr, std::cerr << "Error" << std::endl, -1;
		if (ptr[i] < 0)
			return	delete[] ptr, std::cerr << "Error" << std::endl, -1;
	}
	PMergeMe pm(ptr, argc - 1);
	pm.pmerge();
	delete[] ptr;
	return (0);
}