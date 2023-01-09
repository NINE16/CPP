#include <iostream>
#include <cctype>
#include <string>
#include "Contacts.hpp"

Contacts::Contacts()
{
	// std::cout << "Constructor called" << std::endl;
}

Contacts::~Contacts()
{
	// std::cout << "Destructor called" << std::endl;
}

std::string Contacts::getFirstName()
{
	return (first_name);
}

void Contacts::setFirstName(std:: string input)
{
	first_name = input;
}

std::string Contacts::getLastName()
{
	return (last_name);
}

void Contacts::setLastName(std:: string input)
{
	last_name = input;
}

std::string Contacts::getNickname()
{
	return (nickname);
}

void Contacts::setNickname(std:: string input)
{
	nickname = input;
}

std::string Contacts::getPhone()
{
	return (phone_number);
}

void Contacts::setPhone(std:: string input)
{
	phone_number = input;
}

std::string Contacts::getDarkSecret()
{
	return (dark_secret);
}

void Contacts::setDarkSecret(std:: string input)
{
	dark_secret = input;
}