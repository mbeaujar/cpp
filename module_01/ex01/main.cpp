/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:41:05 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 14:15:27 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	ZombieHorde horde(10, "Joseph");
	return (1);
}