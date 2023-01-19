#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std:: string name)
{
	this->name = name;
	std:: cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std:: cout << "HumanB is putting the weapons down" << std:: endl;
}

void HumanB:: setWeapon(Weapon &weapon) 
{
	this->weapon = &weapon;
}

void HumanB:: attack()
{
	std:: cout << this->name <<  " attacks with their " << this->weapon->getType() << std::endl;
}