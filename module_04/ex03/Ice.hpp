/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:19:53 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 23:11:01 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    private:
    
    public:
        Ice();
        Ice(std::string const & type);
        Ice(Ice const & copy);
        ~Ice();
        Ice & operator=(Ice const & copy);

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