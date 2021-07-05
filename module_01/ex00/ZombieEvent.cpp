/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:27 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:26:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->_type = "";
}

ZombieEvent::~ZombieEvent() {}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *bain = new Zombie(name, this->_type);
	return (bain);
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}