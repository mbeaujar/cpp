/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:34:10 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/29 14:42:57 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {}


AWeapon::AWeapon(AWeapon const & rhs) {
    *this = rhs;
}

AWeapon::~AWeapon() {
    
}

AWeapon & AWeapon::operator=(AWeapon const & rhs) {
    this->_name = rhs.getName();
    this->_damage = rhs.getDamage();
    this->_apcost = rhs.getAPCost();
    return *this;
}


void AWeapon::attack() const {
       std::cout << "attack !" << std::endl;
}

/* Getters */

std::string AWeapon::getName() const {
    return this->_name;
}

int AWeapon::getAPCost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}