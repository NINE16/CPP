#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <cctype>
#include <iomanip>
#include <iostream>


class ClapTrap
{
	private:
			std:: string name;
			int	Hitpoint;
			int	Energypoints;
			int	attackdamage;



	public:
			ClapTrap();
			ClapTrap(ClapTrap const &copy);
			ClapTrap(const std::string z);
			ClapTrap &operator = (const ClapTrap & name); // Assignment operator constructor 
			~ClapTrap(); //Destructor

			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

};


#endif