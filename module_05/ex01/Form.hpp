/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:00:05 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:26:29 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string _name;
        bool _sign;
    public:
        // Coplien form
        Form(std::string);
        Form(Form const &);
        virtual ~Form();
        Form & operator=(Form const &);
        
        // Methods
        void beSigned(Bureaucrat &);

        // Getters
        std::string getName() const;
        bool getSign() const;

        // Exceptions
        class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade Too high";
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade Too low";
				}
		};
        
        
};

std::ostream & operator<<(std::ostream &o, Form const &d);

#endif