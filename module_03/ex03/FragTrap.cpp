/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:18:14 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/19 22:38:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->_name = "unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " is coming." << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " is coming." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " died." << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs) {
    *this = rhs;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
    this->_name = rhs.getname();
	this->_hitPoints = rhs.gethitPoints();
	this->_energyPoints = rhs.getenergyPoints();
	this->_attackDamage = rhs.getattackDamage();
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High fives ?" << std::endl;
}