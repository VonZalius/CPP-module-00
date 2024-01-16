#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    public:
        //constructeur
        Form();
        Form(const std::string name, int sg, int eg);
        //constructeur recopie
        Form(Form const & src);
        //operateur d'affectation
        Form & operator=(const Form & rhs);
        //destructeur
        ~Form();

        //ex01
        std::string getName() const;
        bool getSigned() const;
        int getSignedGrad() const;
        int getExecuteGrad() const;

        void beSigned( const Bureaucrat& bur );

        //EXCEPTIONS
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    protected:

    private:
        const std::string _name;
        bool _signed;
        const int _signedgrade ;
        const int _executegrade ;

};

std::ostream & operator<<( std::ostream & o, Form const & bu);

#endif