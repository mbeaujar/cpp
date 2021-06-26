/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:43:03 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 21:23:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	std::string name[6] = { "Joseph", "Djo", "Jim",
							"Kevin", "Eren", "David"};
	std::string type[4] = { "Angry", "Hungry", "Enraged", "idiot"};
	std::string color[4] = { "\033[31m", "\033[31m", "\033[34m", "\033[33m"};
	this->_horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		this->_horde[i].setZombieType(type[rand() % 4]);
		this->_horde[i].setZombieName(name[rand() % 6]);
		std::cout << color[rand() % 4];
		this->_horde[i].announce();
	}
	std::cout << "\033[0m";
	this->_len = n;
	return;
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_horde;
	return;
}