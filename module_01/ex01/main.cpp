#include "Zombie.hpp"


int main() 
{
	Zombie *a = zombieHorde(10, "Joe");
	for (int i = 0; i < 10; ++i)
		a->announce();
	delete [] a;
	return (0);
}