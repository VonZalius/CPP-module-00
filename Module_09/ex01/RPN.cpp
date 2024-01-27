#include "RPN.hpp"

//constructeur
RPN::RPN( void )
{
    //std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
RPN::RPN( RPN const & src )
{
    *this = src;
    //std::cout << "  ->debug : Constructor Copy called" << std::endl;
}

//operateur d'affectation
RPN & RPN::operator=( RPN const & rhs )
{
    *this = rhs;
    return (*this);
}

//destructeur
RPN::~RPN( void )
{
    //std::cout << "  ->debug : Destructor called" << std::endl;
}

void RPN::do_math(char token)
{
    if (this->_stack.size() < 2)
    {
        std::cout << "Error : not a good math !" << std::endl;
        throw std::exception();
    }

    int b = this->_stack.top();
    this->_stack.pop();
    int a = this->_stack.top();
    this->_stack.pop();

    if (token == '+')
        this->_stack.push(a + b);
    else if (token == '-')
        this->_stack.push(a - b);
    else if (token == '*')
        this->_stack.push(a * b);
    else if (token == '/')
    {
        if(b == 0)
        {
            std::cout << "Error : division by 0" << std::endl;
            throw std::exception();
        }
        this->_stack.push(a / b);
    }
}

//ex00
void RPN::run(const std::string& rpn)
{
    std::istringstream iss(rpn.c_str());
    std::string token;

    try
    {
        while (iss >> token)
        {
            if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')
            {
                do_math(token[0]);
            }
            else
            {
                this->_stack.push(std::atoi(token.c_str()));
            }
        }
        if (this->_stack.size() != 1)
        {
            std::cout << "Error : not a good math !" << std::endl;
            throw std::exception();
        }
        std::cout << this->_stack.top() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : ending" << std::endl;
        //std::cerr << e.what() << '\n';
    }
}
        //std::cout << token << std::endl;