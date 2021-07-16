#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	Zombie *a;
	try {
		a = new Zombie[n];
	} catch (std::bad_alloc) {
		std::cout << "Bad alloc" << std::endl;
		return NULL;
	}
	for (int i = 0; i < n; ++i)
		a[i].setName(name);
	return a;
}