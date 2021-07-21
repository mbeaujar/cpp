/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:41:15 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/18 17:05:59 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
/* 	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "--- increment:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "--- bool:" << std::endl;
	std::cout << (a > Fixed(50)) << std::endl;
	std::cout << (a < Fixed(50)) << std::endl;
	std::cout << (a <= Fixed(a.toFloat())) << std::endl;
	std::cout << (a >= Fixed(a.toFloat())) << std::endl;
	std::cout << (a == Fixed(a.toFloat())) << std::endl;
	std::cout << (a != Fixed(a.toFloat())) << std::endl;
	std::cout << "--- min & max:" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl; */
	Fixed a(10);

	std::cout << a << std::endl;

	return 0;
}