#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iomanip>
#include <cctype>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:

		std:: string name;
		Weapon &weapon;

public:

	HumanA(std:: string name, Weapon &newWeapon);
	void attack();
	void setWeapon(Weapon &weapon);
	~HumanA();

};

#endif