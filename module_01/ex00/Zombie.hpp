#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		virtual ~Zombie();

		void announce() const;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif