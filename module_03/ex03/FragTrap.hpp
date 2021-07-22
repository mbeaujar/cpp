#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap;

class FragTrap : virtual public ClapTrap {
    public:
        // Coplien Form
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &);
        virtual ~FragTrap();
        FragTrap& operator=(FragTrap const &);

        // Methods
        void highFivesGuys(void);
};


#endif