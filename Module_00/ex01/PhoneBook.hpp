#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

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
};

#endif