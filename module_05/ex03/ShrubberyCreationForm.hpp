/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:42:12 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:31:29 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    public:
        // Coplien form
        ShrubberyCreationForm(std::string const &);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

        // Methods
        void beSigned(Bureaucrat &);
        void execute(Bureaucrat const & executor) const;

        // Getters
        bool getSign() const;
};


#endif