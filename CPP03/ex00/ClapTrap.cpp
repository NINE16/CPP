#include "ClapTrap.hpp"

ClapTrap:: ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std:: endl;
}

ClapTrap:: ClapTrap(const std::string name)
{
	this->name = name;
	std::cout << name << " is ready to attack! Beware!" << std:: endl;
	this->Hitpoint = 10;
	this->attackdamage = 0;
	this->Energypoints = 10;
	std:: cout << std::endl;
	std:: cout << this->name << "'s hitpoints available: " << this->Hitpoint << std:: endl;
	std:: cout << this->name << "'s energypoints available: " << this->Energypoints << std:: endl;
	std:: cout << std::endl;
}

ClapTrap:: ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std:: cout << "ClapTrap copy constructor called" << std:: endl;	
}

ClapTrap &ClapTrap:: operator = (const ClapTrap & z)
{
	this->name = z.name;
	this->attackdamage = z.attackdamage;
	this->Hitpoint = z.Hitpoint;
	this->Energypoints = z.Energypoints;
	return (*this);
} // Assignment operator constructor 

ClapTrap:: ~ClapTrap()
{
	std:: cout << "ClapTrap destructor called" << std:: endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energypoints <= 0 || this->Hitpoint <= 0)
		std:: cout << "Sorry, you do not have enough energy or hit points to attack" << std:: endl;
	else
	{
		std:: cout << this->name << " attacks " << target << ", causing " << this->attackdamage <<
		" points of damage" << std:: endl;
		this->Energypoints -= 1;
	}
}
			
void ClapTrap:: takeDamage(unsigned int amount)
{
	std:: cout << this->name << " took " << amount << " hitpoints" << std:: endl;
	this->Hitpoint -= amount;
	std:: cout << "Current hitpoints available: " << this->Hitpoint << std:: endl;
}
			
void ClapTrap:: beRepaired(unsigned int amount)
{
	if (this->Energypoints <= 0 || this->Hitpoint <= 0)
		std:: cout << "Sorry, you do not have enough energy or hit points to heal yourself" << std:: endl;
	else
	{
		std:: cout << this->name << " healed itself with " << amount << " hitpoints" << std:: endl;
		this->Hitpoint += amount;
		this->Energypoints -= 1;
		std:: cout << std::endl;
		std:: cout << this->name << "'s hitpoints available: " << this->Hitpoint << std:: endl;
		std:: cout << this->name << "'s energypoints available: " << this->Energypoints << std:: endl;
	}
}