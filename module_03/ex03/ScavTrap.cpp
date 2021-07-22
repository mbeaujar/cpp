#include "ScavTrap.hpp"

// Coplien Form

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap " << this->getName() << " called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << this->getName() << " called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy.getName()) {
    *this = copy;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->getName() << " died" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &copy) {
    if (this == &copy)
        return *this;
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return *this;
}

// Methods

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " has enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const &enemy) {
    if (this->getEnergyPoints() < 10) {
        std::cout << "ScavTrap " << this->getName() << " does not have enough points." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << enemy << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 10);
    this->setHitPoints(this->getHitPoints() + this->getAttackDamage());
}