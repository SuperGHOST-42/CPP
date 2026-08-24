#include "Contact.hpp"
#include <iostream>

void Contact::setFirstName(std::string name)
{
    this->firstName = name;
}

void Contact::setLastName(std::string name)
{
    this->lastName = name;
}

void Contact::setNickName(std::string name)
{
    this->nickname = name;
}

void Contact::setPhoneNumber(std::string name)
{
    this->phoneNumber = name;
}

void Contact::setDarkestSecret(std::string name)
{
    this->darkestSecret = name;
}

std::string Contact::getFirstName()
{
    return (this->firstName);
}

std::string Contact::getLastName()
{
    return (this->lastName);
}

std::string Contact::getNickname()
{
    return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
    return (this->darkestSecret);
}