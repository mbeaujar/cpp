#include "Ice.hpp"

// Coplien Form

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const &copy) : AMateria(copy.getType()) {}

Ice::~Ice() {}

Ice &Ice::operator=(Ice const &copy) {
    AMateria::operator=(copy);
    return *this;
}

// Methods

AMateria *Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}