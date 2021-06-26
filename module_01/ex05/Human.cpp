/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:31:07 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 22:00:58 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <sstream>

Human::Human() {
	return; 
}

Human::~Human() {
	return;
}

Brain &Human::getBrain() {
	return (this->_intel);
}

std::string Human::identify() {
	std::stringstream address;
	address << &this->_intel;
	return (address.str());
}