#include "Bureaucrat.hpp"

//constructeur
Bureaucrat::Bureaucrat(): _name("Bob_default"), _grade(150)
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    if(this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(this->_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
Bureaucrat & Bureaucrat::operator=( const Bureaucrat & src )
{
    this->_grade = src._grade;
    return (*this);
}

//destructeur
Bureaucrat::~Bureaucrat( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}

//ex00
std::string Bureaucrat::getName() const
{
    std::string r = this->_name;
    return r;
}

int Bureaucrat::getGrade() const
{
    int i = this->_grade;
    return i;
}

void Bureaucrat::increment_grade()
{
    if(this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrement_grade()
{
    if(this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bu)
{
    o << bu.getName() << ", bureaucrat grade " << bu.getGrade() << ".\n";
    return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("You overrated the grade, which is limited in the range [1, 150]");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("You underrated the grade, which is limited in the range [1, 150]");
}

//ex01
void Bureaucrat::signForm(Form & fo)
{
    try
    {
        fo.beSigned(*this);
        std::cout << this->getName() << " signed " << fo.getName() << ".\n";
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " couldn't sign " << fo.getName() << " because " << e.what() << std::endl;
    }
}