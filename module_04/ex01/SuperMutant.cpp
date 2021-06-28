/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:20:04 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 17:44:47 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"


SuperMutant::SuperMutant() : Enemy() {
    Enemy::_hp = 170;
    Enemy::_type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & rhs) {
    *this = rhs;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." <<  std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs) {
    Enemy::_hp = rhs.getHP();
    Enemy::_type = rhs.getType();
    return *this;
}

void SuperMutant::takeDamage(int damage) {
    if (Enemy::_hp - (damage - 3) < 0)
        Enemy::_hp = 0;
    else
        Enemy::_hp -= (damage - 3);
}

std::string SuperMutant::getType() const{
    return Enemy::_type;
}

int SuperMutant::getHP() const {
    return Enemy::_hp;
}