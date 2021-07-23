#include "WrongCat.hpp"

// Coplien Form

WrongCat::WrongCat() : Animal("WrongCat") {
    std::cout << "WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : Animal(copy.getType()) {
    std::cout << "WrongCat called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat died" << std::endl;
}


WrongCat& WrongCat::operator=(WrongCat const &copy) {
    if (this == &copy)
        return *this;
    this->type = copy.getType();
    return *this;
}

// Methods

void WrongCat::makeSound() const {
    std::cout << "Grrrrrr ...." << std::endl;
}