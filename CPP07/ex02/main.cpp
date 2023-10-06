#include "Array.hpp"

#define MAX_VAL 15
int main(int, char**)
{
	std::cout << "------------------per default-------------------------------" << std::endl;

	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            break ;
        }
    }
	std::cout << "------------------my tests-------------------------------" << std::endl;
	std:: cout << std:: endl;
	Array< float > test(10);	


	std::cout << "--float--" << std::endl;
	std:: cout << std:: endl;
	try
	{
		std::cout << "size of float array: " << test.size() << std::endl;
		std::cout << "accessing array item 0: " << test[-1] << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--int--" << std::endl;
	Array< int > intArray( MAX_VAL );
	std:: cout << std:: endl;
	try
	{
		std::cout << "size of int array: " << intArray.size() << std::endl;
		std::cout << "accessing array item 0: " << intArray[2] << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array <int> intArray2;
	std:: cout << std:: endl;
	try
	{
		std::cout << "size of int array: " << intArray2.size() << std::endl;
		std::cout << "accessing array item 0: " << intArray2[2] << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return 0;
}