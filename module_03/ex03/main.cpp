/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:42 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/27 20:09:08 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
 	std::cout << " ------- EX00 --------" << std::endl;
 	ClapTrap jim("jim");
	std::string enemy = "bob";
	jim.setEnergyPoints(30);
	jim.attack(enemy);
	jim.setDamage(25);
	jim.attack(enemy);
	jim.takeDamage(50);
	jim.beRepaired(45);
	std::cout << " ------- EX01 --------" << std::endl;
    ScavTrap bob("bob");
	enemy = "Jimmy";
	bob.attack(enemy);
	bob.guardGate();
	bob = ScavTrap("Joe");
	bob.attack(enemy);
	std::cout << " ------- EX02 --------" << std::endl;
	FragTrap Jean("Jean");
	Jean.highFivesGuys(); 
	std::cout << " ------- EX03 --------" << std::endl;
	DiamondTrap billy("billy");
	billy.whoAmI();
	billy.attack(enemy);
	return (0);
}