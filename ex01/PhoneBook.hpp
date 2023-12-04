#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class Contact {
    public :
    int  index;
    char first_name[999];
    char last_name[999];
    char nickname[999];
    char phone_number[999];
    char darkest_secret[999];
};

class PhoneBook {
    public :
    Contact contact[7];
    int size;
};

#endif