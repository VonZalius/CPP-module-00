#include "RobotomyRequestForm.hpp"
#include <cstdlib>

//constructeur
        RobotomyRequestForm::RobotomyRequestForm( void ): A_Form("Robotomy", 72, 45)
        {
            std::cout << "  ->debug : Constructor called" << std::endl;
        }

        RobotomyRequestForm::RobotomyRequestForm(std::string tar): A_Form("Robotomy", 72, 45), _target(tar)
        {
            std::cout << "  ->debug : Constructor called" << std::endl;
        }

        //constructeur recopie
        RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ): A_Form(src), _target(src._target)
        {
            std::cout << "  ->debug : Constructor Copy called" << std::endl;
        }

        //operateur d'affectation
        RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
        {
            this->_target = rhs._target;
            return (*this);
        }

        //destructeur
        RobotomyRequestForm::~RobotomyRequestForm( void )
        {
            std::cout << "  ->debug : Destructor called" << std::endl;
        }

        //ex02
        void RobotomyRequestForm::execute(Bureaucrat const & executor) const
        {
            if(this->getSigned() != true)
                throw A_Form::FormNotSignedException();
            if(executor.getGrade() > this->getExecuteGrad())
                throw A_Form::GradeTooLowException();
            std::cout << "BRRRRRRRRRRRRRRRRRR... -beep-beep-beep- sssch'KLANG !" << std::endl;
            srand(time(0));
            if(rand() % 2 == 0)
                std::cout << this->_target << " successsfuly robotomized !" << std::endl;
            else
                std::cout << this->_target << " not robotomized ! FAILURE !" << std::endl;
        }