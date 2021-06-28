/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:03:07 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 14:07:01 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() : _name("unnown") {
    std::cout << "Some random victim called " << "unknown" << " just appeared!" << std::endl;
}


Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " <<  name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & rhs) {
    *this = rhs;
}

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs) {
    this->_name = rhs.getName();
    return *this;
}

std::ostream  & operator<<(std::ostream & o, Victim const & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

/*   Settlers */

void Victim::setName(std::string name) {
    this->_name = name;
}

/*  Gettlers */

std::string Victim::getName() const {
    return this->_name;
}