#include "Dog.hpp"

// Coplien Form

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy.getType()) {
    std::cout << "Dog called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog died" << std::endl;
}


Dog& Dog::operator=(Dog const &copy) {
    if (this == &copy)
        return *this;
    this->type = copy.getType();
    return *this;
}

// Methods

void Dog::makeSound() const {
    std::cout << "WOUAF WOUAF !" << std::endl;
}