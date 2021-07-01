/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:53:41 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 15:02:15 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>


class AssaultTerminator : public ISpaceMarine {
    private:
        AssaultTerminator & operator=(AssaultTerminator const & copy);
    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const & copy);
        ~AssaultTerminator();

        /* override Interface */
        ISpaceMarine *clone() const;
        void rangedAttack() const;
        void battleCry() const;
        void meleeAttack() const;
};

#endif