/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:54:56 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/27 20:09:35 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    ClapTrap::_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
    std::cout << "hitpoints : " << this->_hitPoints << std::endl;
    std::cout << "energyPoints : " << this->_energyPoints << std::endl;
    std::cout << "attackDamage : " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs)
{
    *this = rhs;
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    this->_name = rhs.getname();
    this->_hitPoints = rhs.gethitPoints();
    this->_energyPoints = rhs.getenergyPoints();
    this->_attackDamage = rhs.getattackDamage();
    return *this;
}

void DiamondTrap::whoAmI() 
{
    std::cout << "my name : " << this->_name << std::endl;
    std::cout << "claptrap name : " << ClapTrap::_name << std::endl;
}