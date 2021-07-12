#include "Dog.hpp"

Dog::Dog() {
	this->type = "dog";
	this->brain = new Brain;
	std::cout << this << " Dog constructor" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << this << " Dog destructor" << std::endl;
}

Dog::Dog(Dog const &copy) {
	*this = copy;
}

Dog& Dog::operator=(Dog const &assi) {
	this->type = assi.getType();
	//delete this->brain;
	*this->brain = *assi.getBrain();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAF WAF !!" << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}

std::string Dog::getType() const {
	return this->type;
}