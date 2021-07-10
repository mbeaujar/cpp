/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:13:42 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/10 23:00:07 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string type;
	public:
		virtual ~Animal() = 0;
		virtual void makeSound() const {};
		std::string getType() const {
			return this->type;
		};
};

#endif