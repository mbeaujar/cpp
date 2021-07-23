#include "Cure.hpp"

// Coplien Form

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &copy) : AMateria(copy.getType()) {}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &copy) {
    AMateria::operator=(copy);
    return *this;
}

// Methods

AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}