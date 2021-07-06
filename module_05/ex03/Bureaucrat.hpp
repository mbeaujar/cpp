/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:11:24 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:43:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string 	_name;
		int 			_grade;
	
		// Utils fonction
		void gradeNorm(int grade);
	public:
		// Coplien form
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		virtual ~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const &assignation);

		// Methods
		void incrementGrade(int inc);
		void decrementGrade(int dec);
		void signForm(Form &, std::string);
		void executeForm(Form const & form);

		// Getters
		std::string getName() const;
		int getGrade() const;

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

std::ostream & operator<<(std::ostream &o, Bureaucrat const &d);

#endif
