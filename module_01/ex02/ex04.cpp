/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:23:56 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 14:18:22 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string : " << string << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl; 
	std::cout << "stringREF : " << stringREF << std::endl;
	stringREF = "New content";
	std::cout << "string : " << string << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	return (1);
}