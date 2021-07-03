/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:49:03 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/03 14:40:03 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _inventory(NULL), _len(0), _name(name) {}

Character::Character(Character const & copy) {
    *this = copy;
}


Character::~Character() {}

Character & Character::operator=(Character const & copy) {
    freelst(this->_inventory);
    this->_inventory = copy.getInventory();
    this->_len = copy.getLen();
    this->_name = copy.getName();
    return *this;
}


/* Linked list */

t_list* Character::newlst(AMateria *materia)
{
    t_list *lst;

    try {
       lst = new t_list; 
    } catch (std::bad_alloc) {
        return NULL;
    }
    lst->inventory = materia;
    lst->next = NULL;
    lst->previous = NULL;
    return lst;
}

void Character::addlstback(t_list **lst, t_list *add) 
{
    t_list *tmp;

    tmp = *lst;
    if (!add)
        return;
    this->_len++;
    if (!*lst)
    {
        *lst = add;
        return;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = add;
    add->previous = tmp;
}

void Character::freelst(t_list *head)
{
    t_list *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}

/* Fct member */

void Character::equip(AMateria *m) {
    if (this->_len >= 4)
        return;
    addlstback(&this->_inventory, newlst(m));
}

void Character::unequip(int idx)
{
    t_list *tmp;

    tmp = this->_inventory;
    if (idx < 0 || idx > 4)
        return;
//    while (tmp->previous)       // pas sur de l'utilité
//            tmp = tmp->previous;
    while (tmp && idx--)
        tmp = tmp->next;
    if (this->_len > 1)
    {
        if (tmp->previous)
            tmp->previous->next = tmp->next;
        if (tmp->next)
            tmp->next->previous = tmp->previous;
        delete tmp;
    }
    else
    {
        delete tmp;
        this->_inventory = NULL;
    }
    this->_len--;
}

void Character::use(int idx, ICharacter & target) {
    t_list *tmp;

    tmp = this->_inventory;
	if (idx < 0 || idx > 4)
		return;
    while (tmp && idx--)
        tmp = tmp->next;
	if (tmp && tmp->inventory)
    	tmp->inventory->use(target);
}


t_list* Character::getInventory() const {
    return this->_inventory;
}

int Character::getLen() const {
    return this->_len;
}

std::string const & Character::getName() const {
    return this->_name;
}