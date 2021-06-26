/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 22:07:58 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 23:01:49 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & gun) : _name(name), _gun(gun) { }

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_gun.getType() << std::endl;
}