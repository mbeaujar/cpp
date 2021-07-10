#include "Animal.hpp"

Animal::Animal() : type("") {}

Animal::~Animal() {}

Animal::Animal(Animal const &copy) {
	*this = copy;
}

Animal& Animal::operator=(Animal const &assi) {
	this->type = assi.getType();
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Couic !" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}