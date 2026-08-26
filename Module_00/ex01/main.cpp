#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    PhoneBook phoneBook;
    std::string command;

    bool clearScrean = true;

    while (1)
    {
        if (clearScrean == true)
            std::system("clear");
        
        clearScrean = true;
        
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        
        if (!std::getline(std::cin, command))
            break;
        
        std::system("clear");
        
        if (command == "ADD")
        {
            if (phoneBook.addContact() == 1)
            return (1);
        }
        else if (command == "SEARCH")
        {
            clearScrean = false;
            if (phoneBook.search() == 1)
                return (1);
        }
        else if (command == "EXIT")
            break;
    }

    return (0);
}