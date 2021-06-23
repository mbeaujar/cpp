/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:30:18 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 21:56:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>


Brain::Brain() {
	this->_iq = 100;
}

Brain::~Brain() {
	return;
}

std::string Brain::identify() {
	std::stringstream address;
	address << this;
	return (address.str());
}