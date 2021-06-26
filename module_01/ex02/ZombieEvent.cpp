/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:27 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 18:40:35 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->_type = "";
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *bain = new Zombie(name, this->_type);
	return (bain);
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}