/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:09:43 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 12:36:07 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	return (0);
}