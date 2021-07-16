#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie() : _name("") {};
		Zombie(std::string name);
		virtual ~Zombie();

		void announce() const;

		void setName(std::string name) {
			this->_name = name;
		};
};

Zombie* zombieHorde(int n, std::string name);


#endif