#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		RobotomyRequestForm& operator=(RobotomyRequestForm const &);
	public:
		RobotomyRequestForm(std::string const &);
		RobotomyRequestForm(RobotomyRequestForm const &);
		~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;

		class NotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form is not signed";
				};
		};
};


#endif