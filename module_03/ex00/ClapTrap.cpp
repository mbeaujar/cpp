#include "ClapTrap.hpp"

// Coplien form

ClapTrap::ClapTrap() : _name("ClapTrap_name"), _hitpoints(10), _energypoints(10), _attackdamage(0) {
    std::cout << "ClapTrap " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0) {
    std::cout << "ClapTrap " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy) {
    *this = copy;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " died" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &copy) {
    this->_name = copy.getName();
    this->_hitpoints = copy.getHitPoints();
    this->_energypoints = copy.getEnergyPoints();
    this->_attackdamage = copy.getAttackDamage();
    return *this;
}

// Methods

void ClapTrap::attack(std::string const & target) {
    if (this->_energypoints < 10) {
        std::cout << "ClapTrap " << this->_name << " does not have enough points." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
    this->_energypoints -= 10;
    this->_hitpoints += this->_attackdamage;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " has healed " << amount << " points." << std::endl;
    this->_energypoints += amount;
}

// Getters

std::string ClapTrap::getName() const {
    return this->_name;
}

unsigned int ClapTrap::getHitPoints() const {
    return this->_hitpoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return this->_energypoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    return this->_attackdamage;
}

// Setters

void ClapTrap::setName(std::string name) {
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount) {
    this->_hitpoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount) {
    this->_energypoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount) {
    this->_attackdamage = amount;
}