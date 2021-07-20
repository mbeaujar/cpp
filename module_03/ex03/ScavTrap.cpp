/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 22:06:27 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/19 22:38:28 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->_name = "unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap ??? is back." << std::endl;  
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
    this->_name = rhs.getname();
	this->_hitPoints = rhs.gethitPoints();
	this->_energyPoints = rhs.getenergyPoints();
	this->_attackDamage = rhs.getattackDamage();
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) {
    *this = rhs;
}

ScavTrap::ScavTrap(std::string name) {
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << name << " is back." << std::endl;  
}


ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " died." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
}
	
void ScavTrap::attack(std::string & target) {
    if (this->_energyPoints >= 20) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 20;
        this->_hitPoints = 20;
    }
    else
        std::cout << "ScavTrap " << this->_name << " does not have enough points." << std::endl;
}