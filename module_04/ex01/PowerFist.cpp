/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:51:03 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 16:02:03 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() :  AWeapon() {
    AWeapon::_name = "Power Fist";
    AWeapon::_apcost = 8;
    AWeapon::_damage = 50;
}


PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
    AWeapon::_name = name;
    AWeapon::_apcost = apcost;
    AWeapon::_damage = damage;
}

PowerFist::~PowerFist() {
    
}

PowerFist::PowerFist(PowerFist const & rhs) {
    *this = rhs;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs) {
    AWeapon::_name = rhs.getName();
    AWeapon::_apcost = rhs.getAPCost();
    AWeapon::_damage = rhs.getDamage();
    return *this;
}


void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}