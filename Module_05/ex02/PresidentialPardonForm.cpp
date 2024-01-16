#include "PresidentialPardonForm.hpp"

//constructeur
        PresidentialPardonForm::PresidentialPardonForm( void ): A_Form("Presidential", 25, 5)
        {
            std::cout << "  ->debug : Constructor called" << std::endl;
        }

        PresidentialPardonForm::PresidentialPardonForm(std::string tar): A_Form("Presidential", 25, 5), _target(tar)
        {
            std::cout << "  ->debug : Constructor called" << std::endl;
        }

        //constructeur recopie
        PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ): A_Form(src), _target(src._target)
        {
            std::cout << "  ->debug : Constructor Copy called" << std::endl;
        }

        //operateur d'affectation
        PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
        {
            this->_target = rhs._target;
            return (*this);
        }

        //destructeur
        PresidentialPardonForm::~PresidentialPardonForm( void )
        {
            std::cout << "  ->debug : Destructor called" << std::endl;
        }

        //ex02
        void PresidentialPardonForm::execute(Bureaucrat const & executor) const
        {
            if(this->getSigned() != true)
                throw A_Form::FormNotSignedException();
            if(executor.getGrade() > this->getExecuteGrad())
                throw A_Form::GradeTooLowException();
            std::cout << this->_target << " has been pardoned by the great ZAPHOD BEEBLEBOX" << std::endl;
        }