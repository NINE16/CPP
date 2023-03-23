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
	// std:: cout << "Copy constructor called" << std:: endl;

}

Fixed:: Fixed(const int point)
{
	this->fixpoint = point << this->fact_bit;
}

Fixed:: Fixed(const float point)
{
	this->fixpoint = roundf(point * (1 << this->fact_bit));

}

Fixed &Fixed::operator = (const Fixed& z) //operator overload
{
	this->fixpoint = z.getRawBits();
	// std:: cout << "Assignment overload called" << std:: endl;
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

int Fixed::operator> (const Fixed &src)
{
	return (this->fixpoint > src.fixpoint);
}

int Fixed::operator< (const Fixed &src)
{
	return (this->fixpoint < src.fixpoint);
}

int Fixed::operator>= (const Fixed &src)
{
	return (this->fixpoint >= src.fixpoint);
}

int Fixed::operator<= (const Fixed &src)
{
	return (this->fixpoint <= src.fixpoint);
}

int Fixed::operator== (const Fixed &src)
{
	return (this->fixpoint == src.fixpoint);
}

int Fixed::operator!= (const Fixed &src)
{
	return (this->fixpoint != src.fixpoint);
}

Fixed Fixed:: operator +(const Fixed &src)
{
	Fixed fix(src.toFloat() + this->toFloat());
	return (fix);
}

Fixed Fixed:: operator -(const Fixed &src)
{
	Fixed fix(src.toFloat() - this->toFloat());
	return (fix);
}

Fixed Fixed:: operator *(const Fixed &src)
{
	Fixed fix(src.toFloat() * this->toFloat());
	return (fix);
}

Fixed Fixed:: operator /(const Fixed &src)
{
	return (src.toFloat() / this->toFloat());
}

Fixed& Fixed:: operator++() // prefix
{
	this->fixpoint += 1;
	return (*this);
}

Fixed& Fixed:: operator--()
{
	this->fixpoint -= 1;
	return (*this);
}

Fixed Fixed:: operator++(int) //postfix
{
	Fixed fix = *this;
	++(*this);
	return (fix);
}

Fixed Fixed:: operator--(int) //postfix
{
	Fixed fix = *this;
	--(*this);
	return (fix);
}

Fixed& Fixed:: min(Fixed &a, Fixed &b)
{
	if ((a.toFloat() < b.toFloat()))
		return (a);
	return (b);
}

const Fixed& Fixed:: min(const Fixed& a, const Fixed& b)
{
	if ((a.toFloat() < b.toFloat()))
		return (a);
	return (b);
}

Fixed& Fixed:: max(Fixed &a, Fixed &b)
{
	if ((a.toFloat() > b.toFloat()))
		return (a);
	return (b);
}

const Fixed& Fixed:: max(const Fixed& a, const Fixed& b)
{
	if ((a.toFloat() > b.toFloat()))
		return (a);
	return (b);
}