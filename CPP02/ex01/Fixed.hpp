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

			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;


};

std::ostream & operator<<(std:: ostream & o, Fixed const & raw);

#endif