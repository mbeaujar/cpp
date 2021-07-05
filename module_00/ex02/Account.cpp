/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:04:25 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:06:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(std::string name) : _name(name) {}


Account::~Account() {}

Account::Account(Account const &copy) {
    *this = copy;
}

Account& Account::operator=(Account const & assignation) {
    this->_name = assignation.getName();
    return *this;
}



std::string Account::getName() const {
    return this->_name;
}
