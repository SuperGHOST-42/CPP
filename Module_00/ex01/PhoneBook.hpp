#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		contactCount;
		int		oldestIndex;
	
	public:
		PhoneBook();
		void addContact();
		void search();
		~PhoneBook();
		
};

#endif