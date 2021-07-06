/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:02:46 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:26:50 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

class RobotomyRequestForm : public Form {
    public:
        // Coplien form
        RobotomyRequestForm(std::string const &);
        RobotomyRequestForm(RobotomyRequestForm const &);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(RobotomyRequestForm const &);

        // Methods
        void beSigned(Bureaucrat &);
        void execute(Bureaucrat const & executor) const;

        // Getters
        bool getSign() const;
};


#endif