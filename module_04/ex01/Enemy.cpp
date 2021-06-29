/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:04:38 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/29 17:31:42 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::~Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp) {}


Enemy::Enemy(Enemy const & rhs) {
    *this = rhs;
}

Enemy & Enemy::operator=(Enemy const & rhs) {
    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return *this;
}


void Enemy::takeDamage(int damage) {
    if (this->_hp - damage < 0)
       this->_hp = 0;
    else
        this->_hp -= damage; 
    //std::cout << "damage !" << std::endl;
}

/* Getters */

std::string Enemy::getType() const {
    return this->_type;
}

int Enemy::getHP() const {
    return this->_hp;
}


/* 
class Enemy
{
protected:
    [...] public : Enemy(int hp, std::string const &type);
    [...] ~Enemy();
    std::string[...] getType() const;
    int getHP() const;
    virtual void takeDamage(int);
}; */