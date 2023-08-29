#ifndef BASE_HPP
# define BASE_HPP

#include <iomanip>
#include <string>
#include <cctype>
#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <unistd.h>

class Base
{
	public:
			virtual ~Base();
			Base* generate(void);
			void identify(Base* p);
			void identify(Base& p);
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif
