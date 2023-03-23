#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(ScavTrap const &cpy);
			ScavTrap(const std:: string a);
			ScavTrap &operator = (const ScavTrap & r);
			~ScavTrap();

			void guardGate();
			void attack(const std::string& target);

			int	keeper;


};



#endif