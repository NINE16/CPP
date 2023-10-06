#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)	
	{
	std::cout << "it: " << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std:: cout << "----------------------" << std::endl;

	std::list< int > list_ex;

	list_ex.push_back(5);
	list_ex.push_back(17);
	std::cout << "top: " << list_ex.back() << std::endl;
	list_ex.pop_back();
	std::cout << "size: " << list_ex.size() << std::endl;
	list_ex.push_back(3);
	list_ex.push_back(5);
	list_ex.push_back(737);
	list_ex.push_back(0);
	std::list<int>::iterator list_ex_it = list_ex.begin();
	std::list<int>::iterator list_ex_ite = list_ex.end();
	++it;
	--it;
	while (list_ex_it != list_ex_ite)	
	{
		std::cout << "it: " << *list_ex_it << std::endl;
		++list_ex_it;
	}
	return 0;
}