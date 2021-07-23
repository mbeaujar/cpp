/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:09:43 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 16:49:06 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "-------------- TREES ---------------" << std::endl;
	Bureaucrat bob("bobby", 75);
	ShrubberyCreationForm trees(bob.getName() + "_form");
	std::cout << bob;
	//trees.beSigned(bob);
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
 	return (0);
}