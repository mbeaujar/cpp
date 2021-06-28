/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:33:32 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 16:06:23 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle();
        PlasmaRifle(std::string const & name, int apcost, int damage);
        PlasmaRifle(PlasmaRifle const & rhs);
       ~PlasmaRifle();
        PlasmaRifle & operator=(PlasmaRifle const & rhs);

        void attack() const;      
};


#endif