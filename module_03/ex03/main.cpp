#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    {
        std::cout << "-------------- EX00 ---------------" << std::endl;
        ClapTrap a("Jim");
        std::string enemy = "Bob";

        std::cout << "ClapTrap " << a.getName() << " has " << a.getEnergyPoints() << " energy points." << std::endl;
        a.attack(enemy);
        std::cout << "ClapTrap " << a.getName() << " has " << a.getEnergyPoints() << " energy points." << std::endl;
        a.attack(enemy);
        a.beRepaired(23);
        std::cout << "ClapTrap " << a.getName() << " has " << a.getEnergyPoints() << " energy points." << std::endl;
        a.takeDamage(80);
    }
    {
        std::cout << "-------------- EX01 ---------------" << std::endl;
        ScavTrap b("Kenny");
        std::string enemy = "John";

        std::cout << "ScavTrap " << b.getName() << " has " << b.getHitPoints() << " hit points." << std::endl;
        std::cout << "ScavTrap " << b.getName() << " has " << b.getEnergyPoints() << " energy points." << std::endl;
        std::cout << "ScavTrap " << b.getName() << " has " << b.getAttackDamage() << " attack damage." << std::endl;
        b.attack(enemy);
        b.guardGate();
        ScavTrap c(b);
        std::cout << "ScavTrap c: " << c.getName() << std::endl;
        ScavTrap d = c;
        std::cout << "ScavTrap d: " << c.getName() << std::endl;
    }
    {
        std::cout << "-------------- EX02 ---------------" << std::endl;
        FragTrap e("Connor");

        std::cout << "FragTrap " << e.getName() << " has " << e.getHitPoints() << " hit points." << std::endl;
        std::cout << "FragTrap " << e.getName() << " has " << e.getEnergyPoints() << " energy points." << std::endl;
        std::cout << "FragTrap " << e.getName() << " has " << e.getAttackDamage() << " attack damage." << std::endl;
        FragTrap f(e);
        e.highFivesGuys();
        std::cout << "FragTrap f: " << f.getName() << std::endl;
    }
    {
        std::cout << "-------------- EX03 ---------------" << std::endl;
        DiamondTrap g("Greg");
        std::string enemy = "billy";

        std::cout << "DiamondTrap " << g.getName() << " has " << g.getHitPoints() << " hit points." << std::endl;
        std::cout << "DiamondTrap " << g.getName() << " has " << g.getEnergyPoints() << " energy points." << std::endl;
        std::cout << "DiamondTrap " << g.getName() << " has " << g.getAttackDamage() << " attack damage." << std::endl;

        g.attack(enemy);
        g.whoAmI();
    }
    return (0);
}