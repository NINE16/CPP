#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std:: string type)
{
	this->type = type;
	std:: cout << "Weapon constructors are loaded" << std::endl;
}

Weapon::~Weapon()
{
	std:: cout << "Weapons are put down" << std:: endl;
}

void Weapon::setType(std:: string type)
{
	this->type = type;
}

std:: string Weapon:: getType()
{
	return (this->type);
}