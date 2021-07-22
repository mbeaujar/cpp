#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap : virtual public ClapTrap {
    public:
        // Coplien Form
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &);
        virtual ~ScavTrap();
        ScavTrap& operator=(ScavTrap const &);

        // Methods
        void guardGate();
        void attack(std::string const &);
};

#endif