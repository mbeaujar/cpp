/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:43:43 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 18:13:06 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
	this->_name = "";
}

Pony::Pony(std::string name) {
	this->_name = name;	
}

Pony::~Pony() {
	std::cout << "delete -> " << this->_name << std::endl;
	return;
}

std::string Pony::getPonyName(void) const {
	return (this->_name);
}