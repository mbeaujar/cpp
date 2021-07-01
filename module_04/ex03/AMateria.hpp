/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:28:09 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 22:18:00 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria {
    protected:
        unsigned int _xp;
        std::string _type;
        AMateria();
        AMateria(AMateria const & copy);
        AMateria & operator=(AMateria const & copy);
    public:
        AMateria(std::string const &type);
        ~AMateria();
        std::string const &getType() const; //Returns the materia type
        unsigned int getXP() const;         //Returns the Materia's XP
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif