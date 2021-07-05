/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:03:57 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 17:20:31 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
    protected:
        std::string _type;
        int         _hp;
    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & rhs);
        virtual ~Enemy() = 0;
        Enemy & operator=(Enemy const & rhs);

        virtual void takeDamage(int damage);

        /* Getters */
        std::string getType() const;
        int getHP() const;

};


#endif