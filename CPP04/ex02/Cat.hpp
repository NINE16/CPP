#ifndef CAT_HPP
# define CAT_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public: 
			Cat();
			Cat(Cat const &cpy);
			Cat(const std:: string z);
			Cat &operator = (const Cat & z);
			void makeSound() const;

			~Cat();
	private:
			Brain* brain;
};

#endif