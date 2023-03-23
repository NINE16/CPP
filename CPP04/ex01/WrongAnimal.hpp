#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <cctype>
#include <iomanip>
#include <iostream>

class WrongAnimal
{
	public:
			WrongAnimal();
			WrongAnimal(WrongAnimal const &cpy);
			WrongAnimal(const std:: string z);
			WrongAnimal &operator = (const WrongAnimal &z);
			~WrongAnimal();
			void makeSound() const;
			std:: string getType() const;

	protected:
			std:: string type;

};

#endif