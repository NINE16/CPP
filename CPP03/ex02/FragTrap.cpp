#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap:: FragTrap() : ClapTrap ()
{
	this->name = "FragTrap";
	std::cout << this->name << " constructor called!" << std:: endl;
	this->Hitpoint = 100;
	this->attackdamage = 100;
	this->Energypoints = 30;
}

FragTrap:: FragTrap(const std::string a) : ClapTrap (a)
{
	this->name = a;
	std::cout << name << " by FragTrap is ready to attack! Beware!" << std:: endl;
	this->Hitpoint = 100;
	this->attackdamage = 100;
	this->Energypoints = 30;
}

FragTrap:: FragTrap(FragTrap const &cpy) : ClapTrap (cpy)
{
	*this = cpy;
	std:: cout << "FragTrap copy constructor called " << this->name << std:: endl;	
}

FragTrap &FragTrap:: operator = (const FragTrap & r)
{
	this->name = r.name;
	this->attackdamage = r.attackdamage;
	this->Hitpoint = r.Hitpoint;
	this->Energypoints = r.Energypoints;
	return (*this);
}

FragTrap:: ~FragTrap()
{
	std:: cout << "FragTrap destructor called" << std:: endl;
}

void FragTrap:: highFivesGuys()
{
	std:: cout << "FragTrap is asking you for a high five!" << std:: endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->Energypoints <= 0 || this->Hitpoint <= 0)
		std:: cout << "Sorry, you do not have enough energy or hit points to attack" << std:: endl;
	else
	{
		std:: cout << this->name << " by FragTrap" << " attacks " << target << ", causing " << this->attackdamage <<
		" points of damage" << std:: endl;
		this->Energypoints -= 1;
	}
}