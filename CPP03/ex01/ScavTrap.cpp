#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap:: ScavTrap() : ClapTrap ()
{
	this->name = "ScavTrap";
	std::cout << "ScavTrap constructor called" << std:: endl;
	this->Hitpoint = 100;
	this->attackdamage = 20;
	this->Energypoints = 50;
	keeper = 0;
}

ScavTrap:: ScavTrap(const std::string a) : ClapTrap (a)
{
	this->name = a;
	std::cout << name << " by ScavTrap is ready to attack! Beware" << std:: endl;
	this->Hitpoint = 100;
	this->attackdamage = 20;
	this->Energypoints = 50;
	std:: cout << std::endl;
	std:: cout << this->name << "'s hitpoints available: " << this->Hitpoint << std:: endl;
	std:: cout << this->name << "'s energypoints available: " << this->Energypoints << std:: endl;
	std:: cout << std::endl;
	keeper = 0;
}

ScavTrap:: ScavTrap(ScavTrap const &cpy) : ClapTrap (cpy)
{
	*this = cpy;
	std:: cout << "ScavTrap copy constructor called" << std:: endl;	
}

ScavTrap &ScavTrap:: operator = (const ScavTrap & r)
{
	this->name = r.name;
	this->attackdamage = r.attackdamage;
	this->Hitpoint = r.Hitpoint;
	this->Energypoints = r.Energypoints;
	return (*this);
}

ScavTrap:: ~ScavTrap()
{
	std:: cout << "ScavTrap destructor called" << std:: endl;
}

void ScavTrap:: guardGate()
{
	if (keeper == 0)
	{
		std:: cout << "ScavTrap is now in gatekeeper mode" << std:: endl;
		keeper += 1;
	}
	else
		std:: cout << "ScavTrap is already in gatekeeper mode" << std:: endl;
}

void ScavTrap::attack(const std::string& target)
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