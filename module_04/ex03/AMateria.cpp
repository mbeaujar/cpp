/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:29:48 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 22:18:01 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const & copy) {
    *this = copy;
}

AMateria & AMateria::operator=(AMateria const & copy) {
   this->_xp = copy.getXP();
   this->_type = copy.getType();
   return *this;
}

void AMateria::use(ICharacter & target) {
    this->_xp += 10;
}

/* Getters */

std::string const & AMateria::getType() const {
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;
}