#include "Cat.hpp"

// Coplien Form

Cat::Cat() : Animal("Cat") {
    this->brain = new Brain();
    std::cout << "Cat called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy.getType()) {
    this->brain = new Brain();
    *this->brain = *copy.getBrain();
    std::cout << "Cat called" << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat died" << std::endl;
}


Cat& Cat::operator=(Cat const &copy) {
    if (this == &copy)
        return *this;
    *this->brain = *copy.getBrain();
    this->type = copy.getType();
    return *this;
}

// Methods

void Cat::makeSound() const {
    std::cout << "Grrrrrr ...." << std::endl;
}

// Getters

Brain *Cat::getBrain() const {
    return this->brain;
}