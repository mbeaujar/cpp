/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:04:58 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 12:38:00 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Coplien form

Form::Form(std::string name) : _name(name), _executed(25), _signed(70), _sign(false) {}

Form::Form(Form const &copy) : _name(copy.getName()), _executed(copy.getExecuted()), _signed(copy.getSigned()) {}

Form::~Form() {}

Form & Form::operator=(Form const &assignation) {
    if (this == &assignation)
        return *this;
    //this->_sign = assignation.getSign();
    return *this;
}

// Methods

void Form::beSigned(Bureaucrat &bob) {
    try {
        if (bob.getGrade() > this->_signed)
            throw Form::GradeTooLowException();
        this->_sign = true;
        bob.signForm(*this, "");
    } catch (std::exception &e) {
        bob.signForm(*this, e.what());
    }
}


// Setters

void Form::setSign(bool is) {
    this->_sign = is;
}

// Getters


std::string Form::getName() const {
    return this->_name;
}

bool Form::getSign() const {
    return this->_sign;
}

int Form::getExecuted() const {
    return this->_executed;
}

int Form::getSigned() const {
    return this->_signed;
}


// operator

std::ostream & operator<<(std::ostream &o, Form const &d) {
    o << "Form : " << d.getName() << " --- sign : " << d.getSign() << std::endl;
    return o;
}