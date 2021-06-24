/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 21:08:58 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/24 16:45:05 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_login = "";
	this->_postal_address = "";
	this->_email_address = "";
	this->_phone_number = "";
	this->_birthday_date = "";
	this->_favorite_meal = "";
	this->_underwear_color = "";
	this->_darkest_secret = "";
	return;
}

Contact::~Contact(void) {
	return;
}

void Contact::clearContact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_login = "";
	this->_postal_address = "";
	this->_email_address = "";
	this->_phone_number = "";
	this->_birthday_date = "";
	this->_favorite_meal = "";
	this->_underwear_color = "";
	this->_darkest_secret = "";
}

void Contact::setfirstname(std::string name) {
	this->_first_name = name;
}

void Contact::setlastname(std::string name) {
	this->_last_name = name;
}

void Contact::setnickname(std::string name) {
	this->_nickname = name;
}

void Contact::setlogin(std::string name) {
	this->_login = name;
}

void Contact::setpostaladdress(std::string name) {
	this->_postal_address = name;
}

void Contact::setemailaddress(std::string name) {
	this->_email_address = name;
}

void Contact::setphonenumber(std::string name) {
	this->_phone_number = name;
}

void Contact::setbirthdaydate(std::string name) {
	this->_birthday_date = name;
}

void Contact::setfavoritemeal(std::string name) {
	this->_favorite_meal = name;
}

void Contact::setunderwearcolor(std::string name) {
	this->_underwear_color = name;
}

void Contact::setdarkestsecret(std::string name) {
	this->_darkest_secret = name;
}

std::string Contact::getfirstname(void) const {
	return (this->_first_name);
}

std::string Contact::getlastname(void) const {
	return (this->_last_name);
}

std::string Contact::getnickname(void) const {
	return (this->_nickname);
}

std::string Contact::getlogin(void) const {
	return (this->_login);
}

std::string Contact::getpostaladdress(void) const {
	return (this->_postal_address);
}

std::string Contact::getemailaddress(void) const {
	return (this->_email_address);
}

std::string Contact::getphonenumber(void) const {
	return (this->_phone_number);
}

std::string Contact::getbirthdaydate(void) const {
	return (this->_birthday_date);
}

std::string Contact::getfavoritemeal(void) const {
	return (this->_favorite_meal);
}

std::string Contact::getunderwearcolor(void) const {
	return (this->_underwear_color);
}

std::string Contact::getdarkestsecret(void) const {
	return (this->_darkest_secret);
}