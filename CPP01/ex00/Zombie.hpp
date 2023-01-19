#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <iomanip>

class Zombie
{
	private:
			std:: string Name;

	public:
			Zombie();
			~Zombie(void);
			void announce(void);
			void setName(std::string name);
			
};

Zombie* newZombie(std::string name);
void	randomChump(std:: string name);

#endif