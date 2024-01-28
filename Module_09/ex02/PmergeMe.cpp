#include "PmergeMe.hpp"

//constructeur
PmergeMe::PmergeMe( void )
{
    //std::cout << "  ->debug : Constructor called" << std::endl;
}

PmergeMe::PmergeMe(int argc, char** argv)
{
    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j] != '\0'; j++)
            if(!std::isdigit(argv[i][j]))
                throw std::exception();
        int num = std::atoi(argv[i]);
        if (num < 0)
            throw std::exception();
        this->_vec.push_back(num);
        this->_list.push_back(num);
    }
}

//constructeur recopie
PmergeMe::PmergeMe( PmergeMe const & src )
{
    *this = src;
    //std::cout << "  ->debug : Constructor Copy called" << std::endl;
}

//operateur d'affectation
PmergeMe & PmergeMe::operator=( PmergeMe const & rhs )
{
    *this = rhs;
    return (*this);
}

//destructeur
PmergeMe::~PmergeMe( void )
{
    //std::cout << "  ->debug : Destructor called" << std::endl;
}


//ex00
void PmergeMe::run(int argc)
{
    std::cout << "Before :";
    for(int i = 1; i < argc ; i++)
        std::cout << " " << this->_vec[i - 1];
    std::cout << std::endl;

    clock_t start_1 = clock();
    std::list<int>::iterator it1l, it2l, ittest;
    for (it1l = ++this->_list.begin(); it1l != this->_list.end(); ++it1l)
    {
        int temp = *it1l;
        it2l = it1l;
        ittest = it2l;
        std::advance(ittest, -1);
        while (it2l != this->_list.begin() && *(ittest) > temp)
        {
            *it2l = *(ittest);
            std::advance(it2l, -1);
            ittest = it2l;
            std::advance(ittest, -1);
        }
        *it2l = temp;
    }
    clock_t end_1 = clock();
    double time_1 = static_cast<double>(end_1 - start_1) / CLOCKS_PER_SEC * 1000;


    clock_t start_2 = clock();
    std::vector<int>::iterator it1v, it2v;
    for (it1v = ++this->_vec.begin(); it1v != this->_vec.end(); ++it1v)
    {
        int temp2 = *it1v;
        it2v = it1v;
        while (it2v != this->_vec.begin() && *(it2v - 1) > temp2)
        {
            *it2v = *(it2v - 1);
            std::advance(it2v, -1);
        }
        *it2v = temp2;
    }
    clock_t end_2 = clock();
    double time_2 = static_cast<double>(end_2 - start_2) / CLOCKS_PER_SEC * 1000;


    std::cout << "After, with a List :";
    std::list<int>::iterator it = this->_list.begin();
    for(int i = 0; i < (argc - 1); i++)
        std::cout << " " << *it++;
    std::cout << std::endl;
    std::cout << "Time : " << time_1 << std::endl;

    std::cout << "After, with a Vector :";
    for(int i = 0; i < (argc - 1) ; i++)
        std::cout << " " << this->_vec[i];
    std::cout << std::endl;
    std::cout << "Time : " << time_2 << std::endl;
}
        //std::cout << token << std::endl;
        /*std::istringstream iss(PmergeMe.c_str());
    std::string token;*/