/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 18:26:17 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/27 21:04:26 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

Fixed::Fixed() : _value(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs) {
	//std::cout << "Copy constructor called" << std::endl;	
	*this = rhs;
}

Fixed::Fixed(int const & nb) : _value(nb << this->_fractional_bits) {
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const & nb) {
	//std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(nb * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	//std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

float Fixed::toFloat(void) const {
	std::cout << "value: " << std::bitset<16>(this->_value) << std::endl;
	std::cout << "div: " << std::bitset<16>(1 << this->_fractional_bits) << std::endl;
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt(void) const {
	return (this->_value >> this->_fractional_bits);
}


int Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const & nb) {
	this->_value = nb;
}

Fixed Fixed::operator+(Fixed const & rhs) const {
	return (Fixed(this->_value + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	return (Fixed(this->_value - rhs.getRawBits()));
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	return (Fixed(this->_value / rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed & Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old = *this;
	this->operator++();
	return old;
}

Fixed & Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;
	this->operator--();
	return old;
}

bool Fixed::operator<(Fixed const & rhs) const {
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>(Fixed const & rhs) const {
	return rhs < *this;
}

bool Fixed::operator<=(Fixed const & rhs) const {
	return !(*this > rhs);
}

bool Fixed::operator>=(Fixed const & rhs) const {
	return !(*this < rhs);
}

bool Fixed::operator==(Fixed const & rhs) const {
	return this->toFloat() == rhs.toFloat(); 
}

bool Fixed::operator!=(Fixed const & rhs) const {
	return !(*this == rhs); 
}

Fixed & Fixed::max(Fixed & lhs, Fixed & rhs) {
	return lhs > rhs ? lhs : rhs;
}

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs) {
	return lhs > rhs ? rhs : lhs;
}

const Fixed & Fixed::max(Fixed const & lhs, Fixed const & rhs) {
	if (lhs.toFloat() > rhs.toFloat())
		return lhs;
	return rhs;
}

const Fixed & Fixed::min(Fixed const & lhs, Fixed const & rhs) {
	if (lhs.toFloat() > rhs.toFloat())
		return rhs;
	return lhs;
}