#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
		std::cout << "Error : bad arguments" << std::endl;
		return 0;
	}

	RPN bex;

	bex.run(argv[1]);
}