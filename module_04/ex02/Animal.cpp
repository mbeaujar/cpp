#include "Animal.hpp"

// Coplien Form

Animal::Animal() : type("") {
    std::cout << "Animal called" << std::endl;
}

Animal::Animal(std::string name) : type(name) {
    std::cout << "Animal type " << name << " called" << std::endl;
}


Animal::Animal(Animal const &copy) : type(copy.getType()) {
    std::cout << "Animal type " << copy.getType() << " called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal died" << std::endl;
}


Animal& Animal::operator=(Animal const &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.getType();
    return *this;
}

// Methods

/* void Animal::makeSound() const {
    std::cout << "BIP BIP" << std::endl;
} */

// Getters

std::string Animal::getType() const {
    return this->type;
}