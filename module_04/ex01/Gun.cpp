/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gun.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:18:22 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 18:44:21 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Gun.hpp"


Gun::Gun() : AWeapon() {
    AWeapon::_name = "Gun";
    AWeapon::_apcost = 1;
    AWeapon::_damage = 10; 
}


Gun::Gun(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
    AWeapon::_name = name;
    AWeapon::_apcost = apcost;
    AWeapon::_damage = damage;
}

Gun::~Gun() {
    
}

Gun::Gun(Gun const & rhs) {
    *this = rhs;
}

Gun & Gun::operator=(Gun const & rhs) {
    AWeapon::_name = rhs.getName();
    AWeapon::_apcost = rhs.getAPCost();
    AWeapon::_damage = rhs.getDamage();
    return *this;
}


void Gun::attack() const {
    std::cout << "* BOUUUUUMMMM *" << std::endl;
}
