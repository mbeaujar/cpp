/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:54:28 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 18:28:32 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy() {
    Enemy::_hp = 80;
    Enemy::_type = "RadScorpion";
    std::cout << "* click click click *" << std::endl;
}


RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" <<  std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & rhs) {
    *this = rhs;
}


RadScorpion & RadScorpion::operator=(RadScorpion const & rhs) {
    Enemy::_hp = rhs.getHP();
    Enemy::_type = rhs.getType();
    return *this;
}

/* Getters */

std::string RadScorpion::getType() const {
    return Enemy::_type;
}

int RadScorpion::getHP() const {
    return Enemy::_hp;
}
