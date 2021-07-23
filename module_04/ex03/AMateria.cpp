#include "AMateria.hpp"

// Coplien Form

AMateria::AMateria() : _type("") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &copy) {
    *this = copy;
}

AMateria::~AMateria() {}


AMateria &AMateria::operator=(AMateria const &copy) {
    if (this == &copy)
        return *this;
    this->_type = copy.getType();
    return *this;
}

// Methods

void AMateria::use(ICharacter &target) {
    (void)target;
}

// Getters
std::string const &AMateria::getType() const {
    return this->_type;
}