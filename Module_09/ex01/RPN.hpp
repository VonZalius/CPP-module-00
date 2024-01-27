#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include <fstream>
#include <sstream>

class RPN{
    public:
        //constructeur
        RPN();
        //constructeur recopie
        RPN( RPN const & src );
        //operateur d'affectation
        RPN & operator=( RPN const & rhs );
        //destructeur
        ~RPN( void );

        //ex00
        void run(const std::string& rpn);

    private:
        std::stack<int> _stack;
        void do_math(char token);
};

#endif