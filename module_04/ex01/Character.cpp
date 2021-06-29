/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:29:39 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/29 17:45:41 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("unknown"), _ap(40), _gun(NULL) {}

Character::Character(std::string const &name) : _name(name), _ap(40), _gun(NULL)
{
}

Character::~Character()
{
}

Character::Character(Character const &rhs)
{
    *this = rhs;
}

void Character::equip(AWeapon *gun)
{
    this->_gun = gun;
}

void Character::attack(Enemy *target)
{
    if (this->_gun == NULL || this->_ap - this->_gun->getAPCost() < 0)
        return;
    this->_ap -= this->_gun->getAPCost();
    std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_gun->getName() << std::endl;
    this->_gun->attack();
    target->takeDamage(this->_gun->getDamage());
    if (target->getHP() == 0) // if the enemy has 0 hp delete it
        target->~Enemy();
}

Character &Character::operator=(Character const &rhs)
{
    this->_name = rhs.getName();
    this->_gun = rhs.getWeapon();
    this->_ap = rhs.getAp();
    return *this;
}

void Character::recoverAP() {
    if (this->_ap + 10 > 40)
        this->_ap = 40;
    else
        this->_ap += 10;
}

std::ostream &operator<<(std::ostream &o, Character const &rhs)
{
    if (rhs.getWeapon() == NULL)
        o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    return o;
}

/* Getters */

std::string Character::getName() const
{
    return this->_name;
}

AWeapon *Character::getWeapon() const
{
    return this->_gun;
}

int Character::getAp() const
{
    return this->_ap;
}
