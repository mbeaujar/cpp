/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:05:46 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 17:33:28 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &copy) {
	*this = copy;
}
Intern& Intern::operator=(Intern const & ass) {
	(void)ass;
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

Form* Intern::makeForm(std::string const &s1, std::string const &s2) {
	Form *rtn;

	std::string fct[3] = { "robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (*f[3])(std::string const & target) = { &return_robotomy, &return_shrubbery, &return_presidential};
	for (int i = 0; i < 3; i++) 
	{
		if (fct[i] == s1)
		{
			rtn = f[i](s2);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	}
	std::cout << "Intern does not find the form you requested" << std::endl;
	return (NULL);
}