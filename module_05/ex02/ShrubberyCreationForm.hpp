#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
	public:
		ShrubberyCreationForm(std::string const &);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;

		class NotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form is not signed";
				};
		};
};



#endif