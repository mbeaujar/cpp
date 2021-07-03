/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:47:42 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/03 14:30:26 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class AMateria;
class ICharacter;

class ICharacter {
	public:
    	virtual ~ICharacter() {}
    	virtual std::string const &getName() const = 0;
    	virtual void equip(AMateria *m) = 0;
    	virtual void unequip(int idx) = 0;
    	virtual void use(int idx, ICharacter &target) = 0;
};

#endif