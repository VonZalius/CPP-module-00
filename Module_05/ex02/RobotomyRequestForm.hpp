#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "A_Form.hpp"

class RobotomyRequestForm : public A_Form{
    public:
        //constructeur
        RobotomyRequestForm(std::string tar);
        //constructeur recopie
        RobotomyRequestForm( RobotomyRequestForm const & src );
        //operateur d'affectation
        RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
        //destructeur
        ~RobotomyRequestForm( void );

        //ex02
        void execute(Bureaucrat const & executor) const;
    
    private:
        RobotomyRequestForm( void );
        std::string _target;

};

#endif