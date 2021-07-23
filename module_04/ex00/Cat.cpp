#include "Cat.hpp"

// Coplien Form

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy.getType()) {
    std::cout << "Cat called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat died" << std::endl;
}


Cat& Cat::operator=(Cat const &copy) {
    if (this == &copy)
        return *this;
    this->type = copy.getType();
    return *this;
}

// Methods

void Cat::makeSound() const {
    std::cout << "Grrrrrr ...." << std::endl;
}