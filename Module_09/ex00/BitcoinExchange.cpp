#include "BitcoinExchange.hpp"

//constructeur
BitcoinExchange::BitcoinExchange( void )
{
    //std::cout << "  ->debug : Constructor called" << std::endl;
    try
    {
        std::ifstream file("data.csv");

        if (!file.is_open())
            throw std::exception();
        
        std::string line;
        if (!std::getline(file, line))
            throw std::exception();
        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            std::string date;
            double price;
            if(!(std::getline(iss, date, ',') && (iss >> price)))
                throw std::exception();
            else
                this->prices.insert(std::make_pair(date.c_str(), price));
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Error : error with data.csv" << std::endl;
        //std::cerr << e.what() << '\n';
    }
}

//constructeur recopie
BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
    *this = src;
    //std::cout << "  ->debug : Constructor Copy called" << std::endl;
}

//operateur d'affectation
BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
    if (this == &rhs)
        return *this;
	return *this;
}

//destructeur
BitcoinExchange::~BitcoinExchange( void )
{
    //std::cout << "  ->debug : Destructor called" << std::endl;
}

//ex00

void BitcoinExchange::run(const std::string& filename)
{
    try
    {
        std::ifstream file(filename.c_str());

        if (!file.is_open())
            throw std::exception();
        
        std::string line;
        if (!std::getline(file, line))
            throw std::exception();
        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            std::string date;
            double value;
            if(!(std::getline(iss, date, '|') && (iss >> value)))
                std::cout << "Error : syntax not good" << std::endl;
            else if(value > 1000)
                std::cout << "Error : value too big" << std::endl;
            else if(value < 0)
                std::cout << "Error : value cant be < 0" << std::endl;
            else
            {
                double final;
                std::map<std::string, double>::iterator check = this->prices.lower_bound(date.c_str());
                if (check->first == date.c_str())
                {
                    final = check->second;
                    std::cout << "hi" << std::endl;
                }
                else if (check != this->prices.begin())
                {
                    std::map<std::string, double>::iterator pred = check;
                    --pred;
                    final = pred->second;
                }
                else
                    throw std::exception();
                std::cout << date << "=> " << value << " x " << final << " = " << (value * final) << std::endl;
            }
        }

        file.close();
    }

    catch(const std::exception& e)
    {
        std::cout << "Error : file error" << std::endl;
        //std::cerr << e.what() << '\n';
    }
    
}