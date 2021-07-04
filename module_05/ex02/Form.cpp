/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:04:58 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 20:13:17 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Coplien form

Form::Form(std::string name) : _name(name) {
    this->_sign = false;
}



Form::Form(Form const &copy) {
    *this = copy;
}

Form::~Form() {}

Form & Form::operator=(Form const &assignation) {
    this->_name = assignation.getName();
    this->_sign = assignation.getSign();
    return *this;
}

// Methods

void Form::beSigned(Bureaucrat &bob) {
    try {
        if (bob.getGrade() > 70)
            throw Form::GradeTooLowException();
        this->_sign = true;
        bob.signForm(*this, "");
    } catch (std::exception &e) {
        bob.signForm(*this, e.what());
    }
}

void Form::execute(Bureaucrat const &executor) const {
    (void)executor;
}

// Getters


std::string Form::getName() const {
    return this->_name;
}

bool Form::getSign() const {
    return this->_sign;
}

// Setters

void Form::setName(std::string name) {
    this->_name = name;
}

void Form::setSign(bool sign) {
    this->_sign = sign;
}

// operator

std::ostream & operator<<(std::ostream &o, Form const &d) {
    o << "Form : " << d.getName() << " --- sign : " << d.getSign() << std::endl;
    return o;
}