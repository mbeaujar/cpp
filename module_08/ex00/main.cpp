#include "easyfind.hpp"
#include <list>

int main()
{
	std::list<int> a;

	a.push_back(19);
	a.push_back(25);
	a.push_back(34);
	a.push_back(45);
	try {
		std::cout << "pos: " << easyfind(a, 34) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}