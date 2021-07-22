#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap " << this->getName() << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap " << this->getName() << " called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy.getName()) {
    *this = copy;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->getName() << " died" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &copy) {
    if (this == &copy)
        return *this;
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return *this;
}

// Methods

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->getName() << " ask a high five" << std::endl;
}