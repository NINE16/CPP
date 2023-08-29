#include "Data.hpp"

int main ()
{
	Data test;

	test.newdata = "Hello there!";
	Data *ptr = &test;
	uintptr_t convert = 0;

	std:: cout << "ptr original value: " << ptr << std::endl;
	std:: cout << "newdata original value: " << ptr->newdata << std::endl;
	convert = serialize(ptr);
	std:: cout << "this is ptr serialized: " << convert << std::endl;
	ptr = deserialize(convert);
	std:: cout << "this is newdata deserialized: " << ptr->newdata << std::endl;
}
