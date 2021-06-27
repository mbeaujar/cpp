/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:54:28 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/27 21:14:43 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("unknown"), _title("unknown") {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {}


Sorcerer::Sorcerer(Sorcerer const & rhs) {
    *this = rhs;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return *this;
}


/* Settlers */

void Sorcerer::setName(std::string name) {
    this->_name = name;
}

void Sorcerer::setTitle(std::string title) {
    this->_title = title;
}

/* Getters */

std::string Sorcerer::getName(void) const {
    return this->_name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}