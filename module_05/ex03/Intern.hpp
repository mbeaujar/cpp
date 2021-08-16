#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(Intern const &);
		Intern& operator=(Intern const &);

		Form* makeForm(std::string const &formName, std::string const &targetName);
};

#endif