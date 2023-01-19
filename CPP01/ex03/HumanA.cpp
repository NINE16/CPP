#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : weapon(newWeapon)
{
	// this->weapon = newWeapon;
	this->name = name;
	std:: cout << " HumanA Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std:: cout << "HumanA is putting the weapons down" << std:: endl;
}

void HumanA::attack()
{
	std:: cout << this->name <<  " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &newWeapon)
{
	this->weapon = newWeapon;
}
 