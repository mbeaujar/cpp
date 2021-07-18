#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << "destructor -- " << this->_name << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}