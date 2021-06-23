/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 22:08:59 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 23:23:42 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	this->_gun = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& gun) {
	this->_gun = &gun;
}