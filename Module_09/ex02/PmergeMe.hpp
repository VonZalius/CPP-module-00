#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <list>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <ctime>


class PmergeMe{
    public:
        //constructeur
        PmergeMe();
        PmergeMe(int argc, char** argv);
        //constructeur recopie
        PmergeMe( PmergeMe const & src );
        //operateur d'affectation
        PmergeMe & operator=( PmergeMe const & rhs );
        //destructeur
        ~PmergeMe( void );

        //ex00
        void run(int argc);

    private:
        std::vector<int> _vec;
        std::list<int> _list;
};

#endif