#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Jim");
    std::string enemy = "Bob";

    std::cout << "ClapTrap " << a.getName() << " has " << a.getEnergyPoints() << " energy points." << std::endl;
    a.attack(enemy);
    std::cout << "ClapTrap " << a.getName() << " has " << a.getEnergyPoints() << " energy points." << std::endl;
    a.attack(enemy);
    a.beRepaired(23);
    std::cout << "ClapTrap " << a.getName() << " has " << a.getEnergyPoints() << " energy points." << std::endl;
    a.takeDamage(80);
    return (0);
}