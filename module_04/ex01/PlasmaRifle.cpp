/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:34:00 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/29 14:52:03 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle() : AWeapon() {
    AWeapon::_name = "Plasma Rifle";
    AWeapon::_apcost = 5;
    AWeapon::_damage = 21; 
}


PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
    AWeapon::_name = name;
    AWeapon::_apcost = apcost;
    AWeapon::_damage = damage;
}

PlasmaRifle::~PlasmaRifle() {
    
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & rhs) {
    *this = rhs;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs) {
    AWeapon::_name = rhs.getName();
    AWeapon::_apcost = rhs.getAPCost();
    AWeapon::_damage = rhs.getDamage();
    return *this;
}


void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
