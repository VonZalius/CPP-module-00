#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int	main()
{
	srand(time(NULL));

	Base *base = new Base();

	Base *x = base->generate();
	Base *y = base->generate();
	Base *z = base->generate();

    std::cout << std::endl;

	base->identify(x);
	base->identify(y);
	base->identify(z);

    std::cout << std::endl;

	Base &rx = *x;
	Base &ry = *y;
	Base &rz = *z;

    std::cout << std::endl;

	base->identify(rx);
	base->identify(ry);
	base->identify(rz);

    std::cout << std::endl;

	Base *nullPtr = NULL;
	base->identify(nullPtr);

	return 0;
}