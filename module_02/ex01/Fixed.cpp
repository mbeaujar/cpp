/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 18:26:17 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/26 15:46:57 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs) {
	std::cout << "Copy constructor called" << std::endl;	
	*this = rhs;
}

Fixed::Fixed(int const & nb) : _value(nb << this->_fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const & nb) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(nb * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt(void) const {
	return (this->_value >> this->_fractional_bits);
}


int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const & nb) {
	this->_value = nb;
}