#include <iostream>
#include <cctype>
#include "Contacts.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string answer;
	PhoneBook book;

	std::cout << "Welcome to the Yellow Pages" << std::endl; 
	std::cout << "Please select between the following options:" << std::endl;
	std::cout << "ADD\nSEARCH\nEXIT \n" << std::endl;
	while (1)
	{
		std::getline(std::cin, answer);
		if (answer == "ADD")
		{
			book.addContact();
			std::cout << "Please select between the following options:" << std::endl;
			std::cout << "ADD\nSEARCH\nEXIT \n" << std::endl;
		}
		else if (answer == "SEARCH")
		{
			book.printContact();
			std::cout << "Please select between the following options:" << std::endl;
			std::cout << "ADD\nSEARCH\nEXIT \n" << std::endl;
		}
		else if (answer == "EXIT")
			return (0);
		answer.clear();
	}
	// PhoneBook instance;
	return (0);
}