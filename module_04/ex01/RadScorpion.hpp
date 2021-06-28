/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:53:52 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 18:26:33 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
    public:
        RadScorpion();
        RadScorpion(RadScorpion const & rhs);
        ~RadScorpion();
        RadScorpion & operator=(RadScorpion const & rhs);

        /* Getters */
        std::string getType() const;
        int getHP() const;
};


#endif