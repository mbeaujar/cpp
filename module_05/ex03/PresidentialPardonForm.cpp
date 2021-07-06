/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:34:32 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:38:58 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

// Coplien form

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target) {
    
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.getName()) {
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &assignation) {
    Form::setSign(assignation.getSign());
    Form::setName(assignation.getName());
    return *this;
}


// Methods

void PresidentialPardonForm::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= 25) {
        Form::setSign(true);
        b.signForm(*this, "");
    }
    
}


void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
    try
    {
        if (Form::getSign() == true && b.getGrade() <= 5)
        {
			std::cout << b.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
        }
        else
            throw Form::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

// Getters

bool PresidentialPardonForm::getSign() const {
    return Form::getSign();
}