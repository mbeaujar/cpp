/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:12:02 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/19 22:22:58 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
 	ClapTrap jim("jim");
	std::string enemy = "bob";
	jim.setEnergyPoints(30);
	jim.attack(enemy);
	jim.setDamage(25);
	jim.attack(enemy);
	jim.takeDamage(50);
	jim.beRepaired(45);
	return (0);
}