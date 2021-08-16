#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &op) {
	*this = op;
}

Intern& Intern::operator=(Intern const &op) {
	(void)op;
	return *this;
}

Form * return_shrubbery(std::string const & target) {
	return new ShrubberyCreationForm(target);
}

Form * return_robotomy(std::string const &target) {
	return new RobotomyRequestForm(target);
}

Form * return_presidential(std::string const &target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string const &formName, std::string const &targetName) {
	Form *rtn;

	std::string fct[3] = { "robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (*f[3])(std::string const & target) = { &return_robotomy, &return_shrubbery, &return_presidential};
	for (int i = 0; i < 3; i++)
	{
		if (fct[i] == formName)
		{
			rtn = f[i](targetName);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	}
	std::cout << "Intern does not find the form you requested" << std::endl;
	return (NULL);
}