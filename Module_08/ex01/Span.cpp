#include "Span.hpp"

//constructeur
Span::Span( void )
{
}

//constructeur avec init
Span::Span( unsigned int N): _max(N)
{
    this->_span.reserve(N);
}

//constructeur recopie
Span::Span( Span const & src )
{
    *this = src;
}

//operateur d'affectation
Span & Span::operator=( Span const & src )
{
    this->_span = src._span;
    return *this;
}

//destructeur
Span::~Span( void )
{
}

//ex01
void Span::addNumber(int i)
{
    if (this->_span.size() < this->_max)
        this->_span.push_back(i);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (this->_span.size() < 2)
        throw std::exception();
    std::vector<int> v = this->_span;
    std::sort(v.begin(), v.end());
    int final = v[1] - v[0];
    for(long unsigned int i = 1; (i + 1) < v.size(); i++)
    {
        if ((v[i + 1] - v[i]) < final)
            final = (v[i + 1] - v[i]);
    }
    return (final);
}

int Span::longestSpan()
{
    if (this->_span.size() < 2)
        throw std::exception();
    std::vector<int> v = this->_span;
    std::sort(v.begin(), v.end());
    return (v[v.size() - 1] - v[0]);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}