#include "DiamondTrap.hpp"

// Coplien Form

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name"), _name("DiamondTrap_name") {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(30);
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy.getName() + "_clap_name") {
    *this = copy;
}

DiamondTrap::~DiamondTrap() {}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &copy) {
    if (this == &copy)
        return *this;
    this->_name = copy.getName();
    this->setName(copy.getName() + "_clap_name");
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return *this;
}

// Methods

void DiamondTrap::whoAmI() {
    std::cout << "name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}


// Getters
std::string DiamondTrap::getName() const {
    return DiamondTrap::_name;
}