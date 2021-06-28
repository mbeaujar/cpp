/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:09:50 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 14:29:17 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(std::string name) : Victim(name) {
    Victim::_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const & rhs) {
    *this = rhs;
}

Peon & Peon::operator=(Peon const & rhs) {
    Victim::_name = rhs.getName();
    return *this;
}

void Peon::getPolymorphed() const {
    std::cout << Victim::_name << " has been turned into a pink pony!" << std::endl;
}

std::string Peon::getName() const {
    return  Victim::_name;
}

void Peon::setName(std::string name) {
    Victim::_name = name;
}