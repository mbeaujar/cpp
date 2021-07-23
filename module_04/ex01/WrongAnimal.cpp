#include "WrongAnimal.hpp"

// Coplien Form

WrongAnimal::WrongAnimal() : type("") {
    std::cout << "WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name) {
    std::cout << "WrongAnimal type " << name << " called" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const &copy) : type(copy.getType()) {
    std::cout << "WrongAnimal type " << copy.getType() << " called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal died" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.getType();
    return *this;
}

// Methods

void WrongAnimal::makeSound() const {
    std::cout << "LALALALLALALALALAL" << std::endl;
}

// Getters

std::string WrongAnimal::getType() const {
    return this->type;
}