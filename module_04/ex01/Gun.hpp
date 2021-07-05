/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gun.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:18:39 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 17:10:21 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GUN_HPP
#define GUN_HPP

#include "AWeapon.hpp"
#include <iostream>

class Gun : public AWeapon {
    public:
        Gun();
        Gun(std::string const & name, int apcost, int damage);
        Gun(Gun const & rhs);
        virtual ~Gun();
        Gun & operator=(Gun const & rhs);

        void attack() const;      
};

#endif