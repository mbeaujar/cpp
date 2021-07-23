#include "Dog.hpp"

// Coplien Form

Dog::Dog() : Animal("Dog") {
    this->brain = new Brain();
    std::cout << "Dog called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy.getType()) {
    this->brain = new Brain();
    *this->brain = *copy.getBrain();
    std::cout << "Dog called" << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog died" << std::endl;
}


Dog& Dog::operator=(Dog const &copy) {
    if (this == &copy)
        return *this;
    *this->brain = *copy.getBrain();
    this->type = copy.getType();
    return *this;
}

// Methods

void Dog::makeSound() const {
    std::cout << "WOUAF WOUAF !" << std::endl;
}

// Getters

Brain *Dog::getBrain() const {
    return this->brain;
}