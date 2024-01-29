#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat b("Bureaucrat", 2);
        try
        {
            b.increment_grade();
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << b;
    }
    catch (std::exception & e)
    {
        std::cout << "Grade out of range " << e.what() << std::endl;
        return (0);
    }

    // try
    // {
    //     b.incrementGrade();
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << b;
    
    return (0);
}