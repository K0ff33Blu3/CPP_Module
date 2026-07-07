#include "RPN.hpp"

int	main( int argc, char **argv) {
	try
	{
		if (argc != 2)
			throw std::invalid_argument("number of arguments not valid.");
		std::string raw(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}
	

	return 0;
}