/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:29:00 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 18:51:41 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    Character();

public:
    Character(std::string const &name);
    ~Character();
    Character(Character const &rhs);
    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
};

#endif