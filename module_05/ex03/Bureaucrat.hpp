#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"


class Form;

class Bureaucrat {
	private:
		const std::string 	_name;
		int 			_grade;
		
		void gradeNorm(int grade);
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		virtual ~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const &assignation);

		void incrementGrade(int inc);
		void decrementGrade(int dec);
		void signForm(bool isSigned, std::string name, std::string reason) const;
		void executeForm(Form const &form);

		std::string getName() const;
		int getGrade() const;

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
