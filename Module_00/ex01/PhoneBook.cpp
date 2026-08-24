#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
	this->oldestIndex = 0;
}

void PhoneBook::addContact()
{
	Contact newContact;
	std::string input;

	while (input.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, input);
	}
	newContact.setFirstName(input);

	input.clear();
	while (input.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, input);
	}
	newContact.setLastName(input);

	input.clear();
	while (input.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
	}
	newContact.setNickName(input);

	input.clear();
	while(input.empty())
	{
		std::cout << "PhoneNumber: ";
		std::getline(std::cin, input);
	}
	newContact.setPhoneNumber(input);

	input.clear();
	while (input.empty())
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
	}
	newContact.setDarkestSecret(input);

	contacts[oldestIndex] = newContact;
	oldestIndex = (oldestIndex + 1) % 8;

	if (contactCount < 8)
		contactCount++;
}

std::string formatField(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::search(void)
{
    int i;
    int index;
    std::string input;

    if (contactCount == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    i = 0;
    while (i < contactCount)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10)
                  << formatField(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10)
                  << formatField(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10)
                  << formatField(contacts[i].getNickname())
                  << std::endl;
        i++;
    }

    std::cout << "Index: ";

    if (!std::getline(std::cin, input))
        return;

    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    index = input[0] - '0';

    if (index >= contactCount)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    std::cout << "First name: "
              << contacts[index].getFirstName() << std::endl;

    std::cout << "Last name: "
              << contacts[index].getLastName() << std::endl;

    std::cout << "Nickname: "
              << contacts[index].getNickname() << std::endl;

    std::cout << "Phone number: "
              << contacts[index].getPhoneNumber() << std::endl;

    std::cout << "Darkest secret: "
              << contacts[index].getDarkestSecret() << std::endl;
}