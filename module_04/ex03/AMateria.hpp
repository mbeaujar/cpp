/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:28:09 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 23:19:57 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
    protected:
        std::string _type;
        unsigned int _xp;
        AMateria(AMateria const & copy);
        AMateria & operator=(AMateria const & copy);
        AMateria();
    public:
        AMateria(std::string const &type);
        ~AMateria();
        std::string const &getType() const; //Returns the materia type
        unsigned int getXP() const;         //Returns the Materia's XP
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);

        void setType(std::string type);
        void setXp(unsigned int xp);
        
};

#endif