#include "Base.hpp"

Base::~Base()
{
	std:: cout << "Base destructor called" << std:: endl;
}

Base* Base:: generate(void)
{
	int random;
	srand(time(NULL));
	random = rand() % 3;
	switch(random)
	{
		case 0:
		{
			std:: cout << "A is randomly generated" << std:: endl;
			return (new A);
		}
		case 1:
			std:: cout << "B is randomly generated" << std:: endl;
			return (new B);
		case 2:
			std:: cout << "C is randomly generated" << std:: endl;
			return (new C);
		default:
			std:: cout << "Could not properly generate" << std:: endl;
	}
return (0);
}

void Base:: identify(Base* p)
{
	A *trial1;
	B *trial2;

	trial1 = dynamic_cast<A *>(p);
	trial2 = dynamic_cast<B *>(p);
	if (trial1 != NULL)
		std:: cout << "A is identified as pointer" << std:: endl;
	else if (trial2 != NULL)
		std:: cout << "B is identified as pointer" << std:: endl;
	else
		std:: cout << "C is identified as pointer" << std:: endl;
}

void Base:: identify(Base& p)
{
	// A& trial1;
	// B& trial2;

	try
	{
		A &trial1 = dynamic_cast<A &>(p);
		(void)trial1;
		std:: cout << "A is identified as a reference" << std:: endl;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &trial2 = dynamic_cast<B &>(p);
		(void)trial2;
		std:: cout << "B is identified as a reference" << std:: endl;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &trial3 = dynamic_cast<C &>(p);
		(void)trial3;
		std:: cout << "C is identified as a reference" << std:: endl;
	}
	catch(std::exception &e)
	{
		(void)e;
	}

}
