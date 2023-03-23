#include "Fixed.hpp"

int const Fixed::fact_bit = 8;

Fixed:: Fixed()
{
	this->fixpoint = 0;
	std:: cout << "Default constructor called" << std:: endl;
}

Fixed:: Fixed(const Fixed& copy)
{
	*this = copy;
	std:: cout << "Copy constructor called" << std:: endl;

}

Fixed:: Fixed(const int point)
{
	this->fixpoint = point << this->fact_bit;
	std::cout << "Int constructor called" << std:: endl;
}

Fixed:: Fixed(const float point)
{
	this->fixpoint = roundf(point * (1 << this->fact_bit));
	std::cout << "Float constructor called" << std:: endl;
}

Fixed &Fixed::operator = (const Fixed& z) //operator overload
{
	this->fixpoint = z.getRawBits();
	std:: cout << "Assignment overload called" << std:: endl;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	// std:: cout << "getRawBits member function called" << std:: endl;
	return (this->fixpoint);
}
			
void Fixed::setRawBits( int const raw )
{
	this->fixpoint = raw;
}

Fixed:: ~Fixed()
{
	std:: cout << "Destructor called" << std:: endl;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->fixpoint) / (1 << this->fact_bit));

}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(this->fixpoint >> this->fact_bit));
	// return (round(this->fixpoint >> Fixed:: fact_bit));

}

std::ostream & operator<<(std:: ostream & o, Fixed const & raw)
{
	o << raw.toFloat();
	return (o);
}
