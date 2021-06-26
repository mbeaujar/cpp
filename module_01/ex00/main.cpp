/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:43:23 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 18:14:11 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void ponyOnTheStack(void)
{
	Pony tom("tom");
	std::cout << "name of the pony : " << tom.getPonyName() << std::endl;
	return;
}


void ponyOnTheHeap(void) 
{
	Pony *jim = new Pony("jim");
	std::cout << "name of the pony : " << jim->getPonyName() << std::endl;
	delete jim;
	std::cout << "after the delete" << std::endl;
	return;
}

int main(void)
{
	std::cout << "--- Pony on the Stack ---" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "--- Pony on the Heap ---" << std::endl;
	ponyOnTheHeap();
	return (0);
}