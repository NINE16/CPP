#ifndef ZOMBIE1_HPP
# define ZOMBIE1_HPP

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
void	randomChump(std::string name);
Zombie* zombieHorde(int n, std::string name);



#endif