#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "A_Form.hpp"

class PresidentialPardonForm : public A_Form{
    public:
        //constructeur
        PresidentialPardonForm(std::string tar);
        //constructeur recopie
        PresidentialPardonForm( PresidentialPardonForm const & src );
        //operateur d'affectation
        PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
        //destructeur
        ~PresidentialPardonForm( void );

        //ex02
        void execute(Bureaucrat const & executor) const;
    
    private:
        PresidentialPardonForm( void );
        std::string _target;

};

#endif