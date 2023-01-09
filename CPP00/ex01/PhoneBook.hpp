#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <iomanip>
#include "Contacts.hpp"

#define SPACE "           "

class PhoneBook
{
	private:
			Contacts contact_array[8];

	public:
			int		counter;
			PhoneBook();
			~PhoneBook(void);
			void	addContact();
			void	printContact();
			void	searchPrint(std:: string input);
};

#endif