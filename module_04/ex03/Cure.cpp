/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:20:41 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 14:46:04 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("") {}

Cure::Cure(std::string const & type) : AMateria(type) {
    AMateria::_type = type;
}

Cure::~Cure() {}

Cure::Cure(Cure const & copy) {
    *this = copy;
}

Cure & Cure::operator=(Cure const & copy) {
    this->setType(copy.getType());
    this->setXp(copy.getXP());
    return *this;
}

void Cure::use(ICharacter & target) {
    //std::cout << "* shoots an Cure bolt at " << target.getName() " *" << std::endl;
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
    AMateria::use(target);
}

AMateria* Cure::clone() const {
    AMateria* clone = new Cure;
    clone->setType(AMateria::_type);
    clone->setXp(AMateria::_xp);
    return clone;
}

void Cure::setType(std::string type) {
    AMateria::_type = type;
}

void Cure::setXp(unsigned int xp) {
    AMateria::_xp = xp;
}

std::string Cure::getType() const {
    return AMateria::_type;
}

unsigned int Cure::getXP() const {
    return AMateria::_xp;
}