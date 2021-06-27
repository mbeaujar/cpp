/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:17:18 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/27 16:45:29 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	this->_name = rhs.getname();
	this->_hitPoints = rhs.gethitPoints();
	this->_energyPoints = rhs.getenergyPoints();
	this->_attackDamage = rhs.getattackDamage();
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const & rhs) {
	*this = rhs;
}

ClapTrap::ClapTrap() : _name("unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "CL4P-TP ??? is back." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "CL4P-TP " << name << " is back." << std::endl;
}


ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP " << this->_name << " died." << std::endl;
}

void ClapTrap::attack(std::string & target) {
	if (this->_energyPoints > 10) {
		std::cout << "CL4P-TP " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 10;
		this->_hitPoints = 25;
	}
	else
		std::cout << "CL4P-TP " << this->_name << " does not have enough points." << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "CL4P-TP " << this->_name << " has taken " << amount << " damage." << std::endl; 
}

void ClapTrap::setDamage(unsigned int amount) {
	this->_attackDamage = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount) {
	this->_energyPoints = amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "CL4P-TP " << this->_name << " has healed " << amount << " points." << std::endl;
}

const std::string & ClapTrap::getname(void) const {
	return this->_name;
}

const unsigned int & ClapTrap::gethitPoints(void) const {
	return this->_hitPoints;
}

const unsigned int & ClapTrap::getenergyPoints(void) const {
	return this->_energyPoints;
}

const unsigned int & ClapTrap::getattackDamage(void) const {
	return this->_attackDamage;
}