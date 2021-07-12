/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:13:42 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/12 11:34:18 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class IAnimal {
	public:
		virtual void makeSound() const = 0;
		virtual std::string getType() const = 0;
};

#endif