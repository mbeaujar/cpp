/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:01 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 23:35:19 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	this->_name = "";
	this->_type = "";
}

Zombie::Zombie(std::string const name, std::string const type) : _type(type), _name(name) {
	return;
}

Zombie::~Zombie() {
	return;
}

void Zombie::announce() const {
	std::cout << "<" << this->_name << "  (" << this->_type << ")>  " << "Braiiiiiiinnnssss ..." << std::endl;
	return;
}