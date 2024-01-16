#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("MarioBros",11);
        Form form("PiranaContract", 10 ,10);

        bureaucrat.signForm(form);
        std::cout << form << std::endl;

        bureaucrat.increment_grade();
        bureaucrat.signForm(form);

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}