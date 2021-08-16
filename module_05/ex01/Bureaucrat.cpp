/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:12:17 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 14:03:46 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Coplien form

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	try {
		gradeNorm(grade);
		this->_grade = grade;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	*this = copy;
}

Bureaucrat::~Bureaucrat() {}


Bureaucrat & Bureaucrat::operator=(Bureaucrat const &assignation) {
	if (this == &assignation)
		return *this;
	try {
		gradeNorm(assignation.getGrade());
		this->_grade = assignation.getGrade();
		//this->_name = assignation.getName();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &d) {
	o << d.getName() << ", bureaucrat grade " << d.getGrade() << "." << std::endl;
	return o;
}

// Methods

void Bureaucrat::incrementGrade(int inc) {
	try {
		gradeNorm(this->_grade - inc);
		this->_grade -= inc;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(int dec) {
	try {
		gradeNorm(this->_grade + dec);
		this->_grade += dec;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(bool isSigned, std::string name, std::string reason) const {
	if (isSigned == true)
		std::cout << _name << " signs " << name << std::endl;
	else
		std::cout << _name << " cannot sign " << name << " because " << reason << std::endl;
}


// Getters

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

// Utils fonctions

void Bureaucrat::gradeNorm(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}