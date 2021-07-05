/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:33:42 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 17:09:10 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
    protected:
        AWeapon();
        std::string _name;
        int         _apcost;
        int         _damage;
    public: 
        AWeapon(std::string const &name, int apcost, int damage);
        AWeapon(AWeapon const & rhs);
        virtual ~AWeapon();
        AWeapon & operator=(AWeapon const & rhs);

        virtual void attack() const = 0;

        /* Getters */
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
};

#endif