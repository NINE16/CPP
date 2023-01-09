#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
// #include "PhoneBook.hpp"


class Contacts
{
	private:
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string dark_secret;
			std::string phone_number;

	public:
			Contacts();
			~Contacts(void);
			void setFirstName(std:: string input);
			void setLastName(std:: string input);
			void setNickname(std:: string input);
			void setPhone(std:: string input);
			void setDarkSecret(std:: string input);
			std::string getFirstName();
			std::string getLastName();
			std::string getNickname();
			std::string getPhone();
			std::string getDarkSecret();

};

#endif