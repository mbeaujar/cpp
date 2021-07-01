/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:35:39 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 19:11:22 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

typedef struct s_list 
{
    ISpaceMarine *unit;
    struct s_list *next;
} t_list;

class Squad : public ISquad {
    private:
        static t_list *array;
        static int      len;
        static int      count;
        int             nb;
    public:
        Squad();
        Squad(Squad const & copy);
        ~Squad();
        Squad & operator=(Squad const & copy);

        /* Fct membre */
        int push(ISpaceMarine *add);
        ISpaceMarine *getUnit(int nb) const;
        bool is_in_array(ISpaceMarine *newMarine);
        int getCount() const;
};

#endif
