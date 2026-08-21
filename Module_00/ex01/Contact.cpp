#include "Contact.hpp"

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

std::string Contact::getFirstName() const
{
    return (this->firstName);
}

std::string Contact::getLastName() const
{
    return (this->lastName);
}

std::string Contact::getNickname() const
{
    return (this->nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return (this->darkestSecret);
}