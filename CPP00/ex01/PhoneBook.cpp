#include <iostream>
#include <cctype>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->counter = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	std::string input;

	if (this->counter == 8)
		this->counter = 7;
	std::cout << "Please enter first name: " << std::endl;
	std::cin >> input;
	this->contact_array[this->counter].setFirstName(input);
	std::cout << "Please enter last name: " << std::endl;
	std::cin >> input;
	this->contact_array[this->counter].setLastName(input);
	std::cout << "Please enter nickname: " << std::endl;
	std::cin >> input;
	this->contact_array[this->counter].setNickname(input);
	std::cout << "Please enter the phone number: " << std::endl;
	std::cin >> input;
	this->contact_array[this->counter].setPhone(input);
	std::cout << "Please enter the darkest secret of the person: " << std::endl;
	std::cin >> input;
	this->contact_array[this->counter].setDarkSecret(input);
	this->counter++;
	return ;
}

void	PhoneBook::printContact(void)
{
	int i;
	std::string input;

	i = 0;
	std::cout << "| Index  |  FirstN  | LastName | Nickname | " << std::endl;
	std::cout << "|-----------------------------------------| " << std::endl;
	while (i < std::min(this->counter, 8))
	{
		std::cout << "|";
		std::cout << i << std::setw(8) << std::right;
		std::cout << "|";
		input = this->contact_array[i].getFirstName();
		if (input.size() > 10)
		{
			input = input.insert(9, ".");
			input = input.substr(0, 10);
			std::cout << input << std::right;
		}
		else
		{
			std::cout << std::setw(10);
			std::cout << input << std::right;
		}
		std::cout << "|";
		input = this->contact_array[i].getLastName();
		if (input.size() > 10)
		{
			input = input.insert(9, ".");
			input = input.substr(0, 10);
			std::cout << input << std::right;
		}
		else
		{
			std::cout << std::setw(10);
			std::cout << input << std::right;
		}
		std::cout << "|";
		input = this->contact_array[i].getNickname();
		if (input.size() > 10)
		{
			input = input.insert(9, ".");
			input = input.substr(0, 10);
			std::cout << input <<  std::right; 
		}
		else
		{
			std::cout << std::setw(10);
			std::cout << input << std::right;
		}
		std::cout << "|" << std::endl;
		i++;
	}

	std::cout << "Choose the index of your contact: ";
	std::cin >> input;
	if (input <= "7")
	{
		searchPrint(input);
	}
	else
		std::cout << "Index not found\n";
	return ;
}

void	PhoneBook::searchPrint(std::string input)
{
	int search;

	search = std::atoi(input.c_str());
	std:: cout << "First Name:\t" << this->contact_array[search].getFirstName() << std::endl;
	std:: cout << "Last Name:\t" << this->contact_array[search].getLastName() << std::endl;
	std:: cout << "Nickname:\t" << this->contact_array[search].getNickname() << std::endl;
	std:: cout << "Phone Number:\t" << this->contact_array[search].getPhone() << std::endl;
	std:: cout << "Darkest Secret:\t" << this->contact_array[search].getDarkSecret() << std::endl;
}