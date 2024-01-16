#ifndef INTERN_HPP
# define INTERN_HPP

#include "A_Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    public:
        //constructeur
        Intern();
        //constructeur recopie
        Intern( Intern const & src );
        //operateur d'affectation
        Intern & operator=( Intern const & rhs );
        //destructeur
        ~Intern( void );

        //ex03
        A_Form *makeForm(std::string name, std::string target);
    
    private:

};

#endif