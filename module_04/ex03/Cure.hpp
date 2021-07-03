/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:45:40 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 23:11:59 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(std::string const & type);
        Cure(Cure const & copy);
        ~Cure();
        Cure & operator=(Cure const & copy);

        void use(ICharacter & target);
        AMateria *clone() const;

    /* Setters */
        void setType(std::string type);
        void setXp(unsigned int xp);
    /* Getters */
        std::string getType() const;
        unsigned int getXP() const;
};

#endif