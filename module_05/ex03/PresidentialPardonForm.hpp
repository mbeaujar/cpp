#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm& operator=(PresidentialPardonForm const &);
	public:
		PresidentialPardonForm(std::string const &);
		PresidentialPardonForm(PresidentialPardonForm const &);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;

		class NotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form is not signed";
				};
		};
};

#endif