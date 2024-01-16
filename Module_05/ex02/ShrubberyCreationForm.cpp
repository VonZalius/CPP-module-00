#include "ShrubberyCreationForm.hpp"

//constructeur
        ShrubberyCreationForm::ShrubberyCreationForm( void ): A_Form("Shrubbery", 145, 137)
        {
            std::cout << "  ->debug : Constructor called" << std::endl;
        }

        ShrubberyCreationForm::ShrubberyCreationForm(std::string tar): A_Form("Shrubbery", 145, 137), _target(tar)
        {
            std::cout << "  ->debug : Constructor called" << std::endl;
        }

        //constructeur recopie
        ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ): A_Form(src), _target(src._target)
        {
            std::cout << "  ->debug : Constructor Copy called" << std::endl;
        }

        //operateur d'affectation
        ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
        {
            this->_target = rhs._target;
            return (*this);
        }

        //destructeur
        ShrubberyCreationForm::~ShrubberyCreationForm( void )
        {
            std::cout << "  ->debug : Destructor called" << std::endl;
        }

        //ex02
        void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
        {
            //(void)executor;
            if(this->getSigned() != true)
                throw A_Form::FormNotSignedException();
            if(executor.getGrade() > this->getExecuteGrad())
                throw A_Form::GradeTooLowException();
            std::ofstream file((this->_target + "_shrubbery").c_str());
            file << "               _{\\ _{\\{\\/}/}/}__" << std::endl;
            file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
            file << "            {/{/\\}{/{/\\}(_)}{/{/\\}  _" << std::endl;
            file << "         {\\{/(/}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
            file << "        {/{/(_)/}{\\{/)/}{\\(_){/}/}/}/}" << std::endl;
            file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
            file << "      {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
            file << "      _{\\{/{\\{/(_)/}/}{/{/{/\\}\\)(\\}{/\\}" << std::endl;
            file << "     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
            file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/)(/}" << std::endl;
            file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
            file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
            file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
            file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
            file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
            file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
            file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
            file << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
            file << "              (_)  \\.-'.-/" << std::endl;
            file << "          __...--- |'-.-'| --...__" << std::endl;
            file << "   _...--\"   .-'  |'-.-'|  ' -.  \"\"--..__" << std::endl;
            file << " -\"    ' .  . '   |.'-._| '  . .  '   jro" << std::endl;
            file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
            file << "          ' ..     |'-_.-|" << std::endl;
            file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
            file << "              .'   |'- .-|   '." << std::endl;
            file << "  ..-'   ' .  '.   `-._-_.'   .'  '  - ." << std::endl;
            file << "   .-' '        '-._______.-'     '  ." << std::endl;
            file << "        .      ~," << std::endl;
            file.close();
        }