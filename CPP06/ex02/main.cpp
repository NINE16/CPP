#include "Base.hpp"

int main()
{
	Base *a = NULL;

	a = a->generate();
	a->identify(a);
	a->identify(*a);
	return (0);
}
