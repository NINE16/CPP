#ifndef FIXED_HPP
# define FIXED_HPP

#include <cctype>
#include <iomanip>
#include <iostream>

class Fixed
{
	private:
			int fixpoint;
			static const int fact_bit;

	public:
			Fixed();
			Fixed(const Fixed& copy);
			Fixed(const int point);
			Fixed(const float point); //Default constructor
			Fixed &operator = (const Fixed & src); // Assignment operator constructor 
			~Fixed(); //Destructor

			int operator >(const Fixed & src);
			int operator <(const Fixed & src);
			int operator >=(const Fixed & src);
			int operator <=(const Fixed & src);
			int operator ==(const Fixed & src);
			int operator !=(const Fixed & src);

			Fixed operator +(const Fixed & src);
			Fixed operator -(const Fixed & src);
			Fixed operator *(const Fixed & src);
			Fixed operator /(const Fixed & src);


			Fixed &operator++();
			Fixed &operator--();
			Fixed operator++(int);
			Fixed operator--(int);
 

			static Fixed &min (Fixed &a, Fixed &b);
			const static Fixed &min (const Fixed &a, const Fixed &b);
			static Fixed &max (Fixed &a, Fixed &b);
			const static Fixed &max (const Fixed &a, const Fixed &b);


			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;


};

std::ostream & operator<<(std:: ostream & o, Fixed const & raw);

#endif