#include "Zombie.hpp"


int main() 
{
	Zombie a("Joseph");
	a.announce();
	Zombie *b = newZombie("Bob");
	b->announce();
	delete b;
	randomChump("Kenny");
	return (0);
}