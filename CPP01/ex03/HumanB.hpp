#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iomanip>
#include <cctype>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	std:: string name;
	Weapon *weapon;

public:
	HumanB(std:: string name);
	void attack();
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif