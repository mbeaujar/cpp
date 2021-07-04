/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:05 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 21:23:23 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

void randomChump() 
{
	std::string name[6] = { "Joseph", "Djo", "Jim",
							"Kevin", "Eren", "David"};
	std::string type[4] = { "Angry", "Hungry", "Enraged", "idiot"};
	std::string color[4] = { "\033[31m", "\033[31m", "\033[34m", "\033[33m"};
	ZombieEvent brain;
	Zombie *zombie;
	for (int i = 0; i < 10; i++)
	{
		brain.setZombieType(type[rand() % 4]);
		zombie = brain.newZombie(name[rand() % 6]);
		std::cout << color[rand() % 4];
		zombie->announce();
		delete zombie;
	}
	std::cout << "\033[0m";
}


int main(void) 
{
	srand(time(NULL));
	randomChump();
	return (0);
}
