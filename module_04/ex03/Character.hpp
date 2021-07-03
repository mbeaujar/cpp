/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:49:09 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 23:12:32 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

typedef struct s_list
{
    AMateria *inventory;
    struct s_list *next;
    struct s_list *previous;
} t_list;

class Character : public ICharacter {
    private:
        t_list*     _inventory;
        int         _len;
        std::string _name;
        
        t_list* newlst(AMateria *materia);
        void addlstback(t_list **lst, t_list *add);
        void freelst(t_list *head);
        Character();
    public:
        Character(std::string const & name);
        Character(Character const & copy);
        ~Character();
        Character & operator=(Character const & copy);

        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter & target);

        t_list* getInventory() const;
        int getLen() const;
        std::string const & getName() const;

};

#endif