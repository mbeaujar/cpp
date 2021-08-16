/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:09:43 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 12:16:32 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		std::cout << "---------- EX00 ----------" << std::endl;
		Bureaucrat bob("bobby", 75);
		std::cout << bob;
		std::cout << " * Increment grade by 150 ... *" << std::endl;
		bob.incrementGrade(150);
		std::cout << bob;
		std::cout << " * Increment grade by 25 ... *" << std::endl;
		bob.incrementGrade(25);
		std::cout << bob;
		Bureaucrat jimmy("jimmy", 2);
		bob = jimmy;
		std::cout << std::endl
				  << bob;
		std::cout << " * Decrement grade by 1 ... *" << std::endl;
		bob.decrementGrade(1);
		std::cout << bob;
		std::cout << " * Decrement grade by 25 ... *" << std::endl;
		bob.decrementGrade(25);
		std::cout << bob;
		std::cout << " * Decrement grade by 100 ... *" << std::endl;
		bob.decrementGrade(100);
		std::cout << bob;
	}
	{
		std::cout << "---------- EX01 ----------" << std::endl;
		Bureaucrat a("Joseph", 25);
		Form b("sondage", 50, 5);
		Bureaucrat c("David", 75);

		std::cout << b << std::endl;
		try {
			b.beSigned(c);
		} catch (std::exception &e) {
			c.signForm(false, b.getName(), e.what());
		}
		std::cout << b << std::endl;
		try {
			b.beSigned(a);
		} catch (std::exception &e) {
			a.signForm(false, b.getName(), e.what());
		}
		std::cout << b << std::endl;
	}
	return (0);
}