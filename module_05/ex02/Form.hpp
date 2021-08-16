#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const 	_name;
		bool				_isSigned;
		int			const 	_gradeToSign;
		int			const 	_gradeToExec;
	public:
		Form(std::string name, int gradeToSign, int GradeToExec);
		Form(Form const &);
		virtual ~Form();
		Form& operator=(Form const &);

		void beSigned(Bureaucrat &);
		virtual void execute(Bureaucrat const &executor) const = 0;

		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExec() const;


		class GradeTooHighException : public std::exception {
			public: 
				virtual const char* what() const throw() {
					return "Grade Too High";
				};
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade Too Low";
				};
		};
};

std::ostream& operator<<(std::ostream &o, Form const &);

#endif