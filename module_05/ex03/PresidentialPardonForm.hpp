/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:33:52 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:34:14 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

class PresidentialPardonForm : public Form {
    public:
        // Coplien form
        PresidentialPardonForm(std::string const &);
        PresidentialPardonForm(PresidentialPardonForm const &);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &);

        // Methods
        void beSigned(Bureaucrat &);
        void execute(Bureaucrat const & executor) const;

        // Getters
        bool getSign() const;
};


#endif