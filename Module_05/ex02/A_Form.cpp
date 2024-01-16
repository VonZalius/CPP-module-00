#include "A_Form.hpp"

//constructeur
A_Form::A_Form(): _name("Bob_default"), _signed(0), _signedgrade(150), _executegrade(150)
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

A_Form::A_Form(const std::string name, int sg, int eg): _name(name), _signed(0), _signedgrade(sg), _executegrade(eg)
{
    if(this->_signedgrade < 1)
        throw A_Form::GradeTooHighException();
    else if(this->_signedgrade > 150)
        throw A_Form::GradeTooHighException();
    if(this->_executegrade < 1)
        throw A_Form::GradeTooHighException();
    else if(this->_executegrade > 150)
        throw A_Form::GradeTooHighException();
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
A_Form::A_Form( A_Form const & src ): _name(src.getName()), _signed(src.getSigned()), _signedgrade(src.getSignedGrad()), _executegrade(src.getExecuteGrad())
{
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
A_Form & A_Form::operator=( const A_Form & src )
{
    this->_signed = src._signed;
    return (*this);
}

//destructeur
A_Form::~A_Form( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}

//ex01
std::string A_Form::getName() const
{
    std::string r = this->_name;
    return r;
}

bool A_Form::getSigned() const
{
    bool i = this->_signed;
    return i;
}

int A_Form::getSignedGrad() const
{
    int i = this->_signedgrade;
    return i;
}

int A_Form::getExecuteGrad() const
{
    int i = this->_executegrade;
    return i;
}


void A_Form::beSigned(const Bureaucrat & bur)
{
    if (bur.getGrade() > this->_signedgrade)
        throw A_Form::GradeTooLowException();
    this->_signed = 1;
}


std::ostream & operator<<( std::ostream & o, A_Form const & bu)
{
    o << bu.getName() << ", A_Form signed status : " << bu.getSigned() << ". Grade for signe : " << bu.getSignedGrad() << ". Grade for execute : " << bu.getExecuteGrad() << ".";
    return o;
}

const char* A_Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* A_Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char* A_Form::FormNotSignedException::what() const throw()
{
    return ("Form not signed");
}