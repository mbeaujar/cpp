/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:43:21 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 11:40:40 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Coplien form

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target) {
    
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.getName()) {
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &assignation) {
    Form::setSign(assignation.getSign());
    Form::setName(assignation.getName());
    return *this;
}


// Methods

void RobotomyRequestForm::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= 72) {
        Form::setSign(true);
        b.signForm(*this, "");
    }
    
}


unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return ((((h1 * 2654435789U) + h2) * 2654435789U) + h3);
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
    struct timeval time;
    gettimeofday(&time, NULL);
    srand(hash3(time.tv_sec, time.tv_usec, getpid()));
    try
    {
        if (Form::getSign() == true && b.getGrade() <= 45)
        {
            std::cout << "Bssbss... bzzzz" << std::endl;
            if (rand() % 2 == 0)
                std::cout << b.getName() <<" has been robotomized" << std::endl;
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

bool RobotomyRequestForm::getSign() const {
    return Form::getSign();
}