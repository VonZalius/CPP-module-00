#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : bad arguments" << std::endl;
		return 0;
	}

	BitcoinExchange bex;

	bex.run(argv[1]);
}


/*erreur :
- date inconnu : ne prend pas le date précédente

- nombre négatif : erreur non géré
- nombre trop grand : erreur non géré
*/