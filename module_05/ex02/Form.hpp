/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:00:05 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 19:14:21 by mbeaujar         ###   ########.fr       */
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
        ~Form();
        Form & operator=(Form const &);
        
        // Methods
        void beSigned(Bureaucrat &);
        void execute(Bureaucrat const & executor) const;

        // Getters
        std::string getName() const;
        bool getSign() const;

        // Setters
        void setName(std::string name);
        void setSign(bool sign);

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