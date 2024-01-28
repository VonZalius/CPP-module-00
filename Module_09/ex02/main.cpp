#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
	{
		std::cout << "Error : bad arguments" << std::endl;
		return 0;
	}

	try
	{
		PmergeMe bex(argc, argv);
		bex.run(argc);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error : bad arguments" << std::endl;
		//std::cerr << e.what() << '\n';
	}

}