#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "A_Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public A_Form{
    public:
        //constructeur
        ShrubberyCreationForm(std::string tar);
        //constructeur recopie
        ShrubberyCreationForm( ShrubberyCreationForm const & src );
        //operateur d'affectation
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
        //destructeur
        ~ShrubberyCreationForm( void );

        //ex02
        void execute(Bureaucrat const & executor) const;
    
    private:
        ShrubberyCreationForm( void );
        std::string _target;

};

#endif