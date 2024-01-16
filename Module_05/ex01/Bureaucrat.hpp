#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat{
    public:
        //constructeur
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        //constructeur recopie
        Bureaucrat(Bureaucrat const & src);
        //operateur d'affectation
        Bureaucrat & operator=(const Bureaucrat & rhs);
        //destructeur
        ~Bureaucrat();

        //ex00
        std::string getName() const;
        int getGrade() const;
        void increment_grade();
        void decrement_grade();
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

        //ex01
        void signForm(Form & fo);

    protected:

    private:
        const std::string _name;
        int _grade ;


};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bu);

#endif