/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:53:41 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 15:02:15 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>


class TacticalMarine : public ISpaceMarine {
    private:
        TacticalMarine & operator=(TacticalMarine const & copy);
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const & copy);
        ~TacticalMarine();

        /* override Interface */
        ISpaceMarine *clone() const;
        void rangedAttack() const;
        void battleCry() const;
        void meleeAttack() const;
};

#endif