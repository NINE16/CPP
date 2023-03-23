#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(FragTrap const &cpy);
			FragTrap(const std:: string name);
			FragTrap &operator =(const FragTrap &r);
			~FragTrap();

			void attack(const std:: string& target);
			void highFivesGuys(void);
};

#endif