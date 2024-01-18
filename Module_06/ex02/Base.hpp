#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdint.h>

class Base{
    public:
        virtual ~Base( void ) {};

        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);

    private:
};

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


#endif