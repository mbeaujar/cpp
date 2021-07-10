#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {}

WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &assi) {
	this->type = assi.getType();
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Couic !" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}