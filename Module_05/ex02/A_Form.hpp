#ifndef A_FORM_HPP
# define A_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class A_Form{
    public:
        //constructeur
        A_Form();
        A_Form(const std::string name, int sg, int eg);
        //constructeur recopie
        A_Form(A_Form const & src);
        //operateur d'affectation
        A_Form & operator=(const A_Form & rhs);
        //destructeur
        virtual ~A_Form();

        //ex01
        std::string getName() const;
        bool getSigned() const;
        int getSignedGrad() const;
        int getExecuteGrad() const;

        void beSigned( const Bureaucrat& bur );

        //ex02
        virtual void execute(Bureaucrat const & executor) const = 0;

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
        class FormNotSignedException : public std::exception
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

std::ostream & operator<<( std::ostream & o, A_Form const & bu);

#endif