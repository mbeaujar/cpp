/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:19:34 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 18:15:28 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
    public:
        SuperMutant();
        SuperMutant(SuperMutant const & rhs);
        ~SuperMutant();
        SuperMutant & operator=(SuperMutant const & rhs);

    void takeDamage(int damage);
    /* Getters */
    std::string getType() const;
    int getHP() const;
};


#endif