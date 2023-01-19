#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cctype>
#include <iomanip>

class Weapon
{
	private:
			std:: string type;


	public: 
		Weapon(std:: string type);
		void setType(std:: string type);
		std:: string getType();
		~Weapon();

	
};

#endif