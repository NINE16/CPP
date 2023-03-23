#include "Fixed.hpp"

int const Fixed::fact_bit = 8;

Fixed:: Fixed()
{
	this->fixpoint = 0;
	std:: cout << "Default constructor called" << std:: endl;
}

Fixed:: ~Fixed()
{
	std:: cout << "Destructor called" << std:: endl;
}

Fixed:: Fixed(const Fixed& copy)
{
	*this = copy;
	std:: cout << "Copy constructor called" << std:: endl;

}

int Fixed::getRawBits( void ) const
{
	std:: cout << "getRawBits member function called" << std:: endl;
	return (this->fixpoint);
}
			
void Fixed::setRawBits( int const raw )
{
	this->fixpoint = raw;
}

Fixed &Fixed::operator = (const Fixed& z) //operator overload
{
	this->fixpoint = z.getRawBits();
	std:: cout << "Assignment overload called" << std:: endl;
	return (*this);
}
