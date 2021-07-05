/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:43:21 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 12:49:07 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Coplien form

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target) {
    
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy.getName()) {
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &assignation) {
    Form::setSign(assignation.getSign());
    Form::setName(assignation.getName());
    return *this;
}


// Methods

void ShrubberyCreationForm::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= 145) {
        Form::setSign(true);
        b.signForm(*this, "");
    }
    
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
    try
    {
        if (Form::getSign() == true && b.getGrade() <= 137)
        {
            std::cout << "      /\\      " << std::endl;
            std::cout << "     /\\*\\     " << std::endl;
            std::cout << "    /\\O\\*\\    " << std::endl;
            std::cout << "   /*/\\/\\/\\   " << std::endl;
            std::cout << "  /\\O\\/\\*\\/\\  " << std::endl;
            std::cout << " /\\*\\/\\*\\/\\/\\ " << std::endl;
            std::cout << "/\\O\\/\\/*/\\/O/\\" << std::endl;
            std::cout << "      ||      " << std::endl;
            std::cout << "      ||      " << std::endl;
            std::cout << "      ||      " << std::endl;
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

bool ShrubberyCreationForm::getSign() const {
    return Form::getSign();
}