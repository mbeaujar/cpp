/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:09:43 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 17:35:35 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bob("bobby", 75);
	Form eval("eval");
	std::cout << bob;
	eval.beSigned(bob);
	bob.incrementGrade(40);
	std::cout << bob;
	eval.beSigned(bob);
	std::cout << eval;
	std::cout << "-------------- TREES ---------------" << std::endl;
	ShrubberyCreationForm trees(bob.getName());
	std::cout << bob;
	std::cout << " - try to execute" << std::endl;
	trees.execute(bob);
	Bureaucrat jim("jim", 137);
	std::cout << jim;
	std::cout << " - try to sign jim" << std::endl;
	trees.beSigned(jim);
	std::cout << " - try to execute" << std::endl;
	trees.execute(jim);
	std::cout << "-------------- ROBOT ---------------" << std::endl;
	Bureaucrat john("john", 39);
	RobotomyRequestForm robot(john.getName());
	std::cout << john;
	std::cout << " - try to sign john" << std::endl;
	robot.beSigned(john);
	std::cout << " - try to execute" << std::endl;
	robot.execute(john);
	robot.execute(john);
	robot.execute(john);
	Bureaucrat Joseph("Joseph", 2);
	PresidentialPardonForm pre(Joseph.getName());
	std::cout << Joseph;
	std::cout << "try to sign joseph" << std::endl;
	pre.beSigned(Joseph);
	std::cout << "execute joseph form" << std::endl;
	pre.execute(Joseph);
	std::cout << "----------" << std::endl;
	Joseph.executeForm(pre);
	Intern billy;
	Form *rtn;
	rtn = billy.makeForm("robotomy request", "bender");
	delete rtn;
	rtn = billy.makeForm("lalalla", "oui");
	rtn = billy.makeForm("shrubbery creation", "eric");
	delete rtn;
	rtn = billy.makeForm("presidential pardon", "ramzi");
	delete rtn;
 	return (0);
}