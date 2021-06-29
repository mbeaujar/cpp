/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:29:00 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/29 16:24:11 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
    private:
        std::string _name;
        int         _ap;
        AWeapon     *_gun;
        Character();
    public:
        Character(std::string const & name);
        ~Character();
        Character(Character const & rhs);
        Character & operator=(Character const & rhs);
        void recoverAP();
        void equip(AWeapon *gun);
        void attack(Enemy *target);

        /* Getters */
        std::string getName() const;
        AWeapon * getWeapon() const;
        int getAp() const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);


#endif