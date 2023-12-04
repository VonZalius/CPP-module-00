#include "PhoneBook.hpp"

void
ft_add(PhoneBook *phonebook)
{
    static int i;


    std::cout << "Entrez le prénom : ";
    std::cin >> phonebook->contact[i].first_name;

    std::cout << "Entrez le nom de famille : ";
    std::cin >> phonebook->contact[i].last_name;

    std::cout << "Entrez le surnom : ";
    std::cin >> phonebook->contact[i].nickname;

    std::cout << "Entrez le numéro : ";
    std::cin >> phonebook->contact[i].phone_number;

    std::cout << "Entrez le secret le plus sombre : ";
    std::cin >> phonebook->contact[i].darkest_secret;

    phonebook->contact[i].index = i;
    i++;
    if(i == 8)
        i = 0;
    if(phonebook->size < 8)
        phonebook->size++;
}

int
ft_size(char *string)
{
    int i = 0;

    while(string[i] != '\0')
        i++;
    return (10 - i);
}

void
ft_search_2(PhoneBook *phonebook, int i)
{
    int l;

    if (phonebook->contact[i].index + 1 != 9)
        std::cout << (phonebook->contact[i].index + 1) << " | ";
    else
        std::cout << 8 << " | ";

    l = ft_size(phonebook->contact[i].first_name);
    if(l >= 0)
    {   
        for(int i = 0; i < l; i += 1)
            std::cout << " ";
        std::cout << phonebook->contact[i].first_name << " | ";
    }
    else
    {
        for(int k = 0; k < 9; k += 1)
            std::cout << phonebook->contact[i].first_name[k];
        std::cout << ". | ";
    }

    l = ft_size(phonebook->contact[i].last_name);
    if(l >= 0)
    {   
        for(int i = 0; i < l; i += 1)
            std::cout << " ";
        std::cout << phonebook->contact[i].last_name << " | ";
    }
    else
    {
        for(int k = 0; k < 9; k += 1)
            std::cout << phonebook->contact[i].last_name[k];
        std::cout << ". | ";
    }

    l = ft_size(phonebook->contact[i].nickname);
    if(l >= 0)
    {   
        for(int i = 0; i < l; i += 1)
            std::cout << " ";
        std::cout << phonebook->contact[i].nickname << std::endl;
    }
    else
    {
        for(int k = 0; k < 9; k += 1)
            std::cout << phonebook->contact[i].nickname[k];
        std::cout << "." << std::endl;
    }
}

void
ft_search(PhoneBook *phonebook)
{
    int k;

    for(int i = 0; i < phonebook->size; i += 1)
        ft_search_2(phonebook, i);

    std::cout << "Entrez l'index désiré : ";
    std::cin >> k;

    if(k > phonebook->size)
        std::cout << "Index non valide" << std::endl;
    else
    {
        std::cout << phonebook->contact[k - 1].first_name << std::endl;
        std::cout << phonebook->contact[k - 1].last_name << std::endl;
        std::cout << phonebook->contact[k - 1].nickname << std::endl;
        std::cout << phonebook->contact[k - 1].phone_number << std::endl;
        std::cout << phonebook->contact[k - 1].darkest_secret << std::endl;
    }
}

void
ft_exit()
{
    std::cout << "See you later aligator !" << std::endl;
    exit(0);
}

int
main()
{
    PhoneBook phonebook;
    char buff[512];

    phonebook.size = 0;
    while(1)
    {
        std::cin >> buff;

        if(buff[0] == 'A' && buff[1] == 'D' && buff[2] == 'D' && buff[3] == '\0')
            ft_add(&phonebook);

        if(buff[0] == 'S' && buff[1] == 'E' && buff[2] == 'A' && buff[3] == 'R' && buff[4] == 'C' && buff[5] == 'H' && buff[6] == '\0')
            ft_search(&phonebook);

        if(buff[0] == 'E' && buff[1] == 'X' && buff[2] == 'I' && buff[3] == 'T' && buff[4] == '\0')
            ft_exit();
    }
    return 0;
}