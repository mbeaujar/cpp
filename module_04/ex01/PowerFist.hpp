/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:50:54 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 16:06:30 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {
    public:
        PowerFist();
        PowerFist(std::string const & name, int apcost, int damage);
        PowerFist(PowerFist const & rhs);
       ~PowerFist();
        PowerFist & operator=(PowerFist const & rhs);

        void attack() const;      
};

#endif 