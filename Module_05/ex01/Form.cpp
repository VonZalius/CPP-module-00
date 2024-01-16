#include "Form.hpp"

//constructeur
Form::Form(): _name("Bob_default"), _signed(0), _signedgrade(150), _executegrade(150)
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

Form::Form(const std::string name, int sg, int eg): _name(name), _signed(0), _signedgrade(sg), _executegrade(eg)
{
    if(this->_signedgrade < 1)
        throw Form::GradeTooHighException();
    else if(this->_signedgrade > 150)
        throw Form::GradeTooHighException();
    if(this->_executegrade < 1)
        throw Form::GradeTooHighException();
    else if(this->_executegrade > 150)
        throw Form::GradeTooHighException();
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
Form::Form( Form const & src ): _name(src.getName()), _signed(src.getSigned()), _signedgrade(src.getSignedGrad()), _executegrade(src.getExecuteGrad())
{
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
Form & Form::operator=( const Form & src )
{
    this->_signed = src._signed;
    return (*this);
}

//destructeur
Form::~Form( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}

//ex01
std::string Form::getName() const
{
    std::string r = this->_name;
    return r;
}

bool Form::getSigned() const
{
    bool i = this->_signed;
    return i;
}

int Form::getSignedGrad() const
{
    int i = this->_signedgrade;
    return i;
}

int Form::getExecuteGrad() const
{
    int i = this->_executegrade;
    return i;
}


void Form::beSigned(const Bureaucrat & bur)
{
    if (bur.getGrade() > this->_signedgrade)
        throw Form::GradeTooLowException();
    this->_signed = 1;
}


std::ostream & operator<<( std::ostream & o, Form const & bu)
{
    o << bu.getName() << ", Form signed status : " << bu.getSigned() << ". Grade for signe : " << bu.getSignedGrad() << ". Grade for execute : " << bu.getExecuteGrad() << ".";
    return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}