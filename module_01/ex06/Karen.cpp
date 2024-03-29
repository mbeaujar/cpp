/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:20:25 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/19 15:26:06 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

// Method

void Karen::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/* void Karen::complain(std::string level)
{
    int display = 0;
    void (Karen::*f[])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
    std::string fct[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
    {
        if (level == fct[i])
            display = 1;
        if (display == 1) {
           (this->*(f[i]))();
           std::cout << std::endl;
        }
    }
    if (display == 0) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
} */

int whichLevel(std::string level)
{
	if (level == "DEBUG")
		return 4;
	if (level == "INFO")
		return 3;
	if (level == "WARNING")
		return 2;
	if (level == "ERROR")
		return 1;
	return 5;
}

void Karen::complain(std::string level)
{
	switch (whichLevel(level))
	{
		case 4:
			this->debug();
			std::cout << std::endl;
		case 3:
			this->info();
			std::cout << std::endl;
		case 2:
			this->warning();
			std::cout << std::endl;
		case 1:
			this->error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
