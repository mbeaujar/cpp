/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:23:56 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 22:57:30 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pointer = &string;
	std::string &reference = string;

	std::cout << "string : " << string << std::endl;
	std::cout << "pointer : " << *pointer << std::endl; 
	std::cout << "reference : " << reference << std::endl;
	reference = "New content";
	std::cout << "string : " << string << std::endl;
	std::cout << "pointer : " << *pointer << std::endl;
	return (1);
}