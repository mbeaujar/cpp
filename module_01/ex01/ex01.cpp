/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:14:38 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 20:41:37 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


void memoryLeak(void)
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int main(void)
{
	memoryLeak();
	return(0);
}