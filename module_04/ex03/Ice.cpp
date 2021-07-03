/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:20:41 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/03 14:56:50 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	AMateria::_type = "ice";
}

Ice::Ice(std::string const & type) : AMateria(type) {
    AMateria::_type = type;
}

Ice::~Ice() {}

Ice::Ice(Ice const & copy) {
    *this = copy;
}

Ice & Ice::operator=(Ice const & copy) {
    this->setType(copy.getType());
    this->setXp(copy.getXP());
    return *this;
}

void Ice::use(ICharacter & target) {
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
    AMateria::use(target);
}

AMateria* Ice::clone() const {
    AMateria* clone = new Ice;
    clone->setType(AMateria::_type);
    clone->setXp(AMateria::_xp);
    return clone;
}

void Ice::setType(std::string type) {
    AMateria::_type = type;
}

void Ice::setXp(unsigned int xp) {
    AMateria::_xp = xp;
}

std::string Ice::getType() const {
    return AMateria::_type;
}

unsigned int Ice::getXP() const {
    return AMateria::_xp;
}