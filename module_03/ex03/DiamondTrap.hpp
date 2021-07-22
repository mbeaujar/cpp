#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap;

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;
    public:
        // Coplien Form
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &);
        virtual ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap const &);

        // Methods
        void whoAmI();

        // Getters
        std::string getName() const;

};

#endif