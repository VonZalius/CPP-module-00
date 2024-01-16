#include "Bureaucrat.hpp"
#include "A_Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern      intern;

    A_Form        *form = intern.makeForm("shrubbery creation", "Form");
    A_Form        *form2 = intern.makeForm("robotomy request", "Form2");
    A_Form        *form3 = intern.makeForm("presidential pardon", "Form3");
    A_Form        *form4 = intern.makeForm("test non valide", "Form4");

    std::cout << *form << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;
    
    delete form;
    delete form2;
    delete form3;
    delete form4;
    return (0);
}