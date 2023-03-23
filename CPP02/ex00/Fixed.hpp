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
			Fixed(); //Default constructor
			~Fixed(); //Destructor
			Fixed(const Fixed& copy);	//Copy of default constructor
			Fixed &operator = (const Fixed& src); // Assignment operator constructor 

			int getRawBits( void ) const;
			void setRawBits( int const raw );


};

#endif