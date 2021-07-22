#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap;

class ClapTrap {
    private:
        std::string _name;
        unsigned int _hitpoints;
        unsigned int _energypoints;
        unsigned int _attackdamage;
    public:
        // Colpien Form
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &);
        virtual ~ClapTrap();
        ClapTrap& operator=(ClapTrap const &);

        // Methods
        void attack(std::string const &);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);


        // Getters
        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

        // Setters
        void setName(std::string);
        void setHitPoints(unsigned int);
        void setEnergyPoints(unsigned int);
        void setAttackDamage(unsigned int);


};


#endif