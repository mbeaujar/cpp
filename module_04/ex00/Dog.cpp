#include "Dog.hpp"

Dog::Dog() {
	Animal::type = "dog";
}

Dog::~Dog() {}

Dog::Dog(Dog const &copy) {
	*this = copy;
}

Dog& Dog::operator=(Dog const &assi) {
	Animal::type = assi.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAF WAF !!" << std::endl;
}