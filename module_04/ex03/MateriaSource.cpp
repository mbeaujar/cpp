/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:49:47 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 15:20:30 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : _inventory(NULL), _len(0) {}


MateriaSource::MateriaSource(MateriaSource const & copy) {
    *this = copy;
}


MateriaSource::~MateriaSource() {
    freelst(this->_inventory);
}

MateriaSource & MateriaSource::operator=(MateriaSource const & copy) {
    freelst(this->_inventory);
    this->_inventory = copy.getInventory();
    this->_len = copy.getLen();
    return *this;
}

void MateriaSource::learnMateria(AMateria *to) {
    addlstback(&this->_inventory, newlst(to));
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    t_list *tmp;

    tmp = this->_inventory;
    while (tmp)
    {
        if (tmp->inventory->getType() == type)
            return tmp->inventory;
        tmp = tmp->next;
    }
    return 0;
}

/* Linked list */

t_list* MateriaSource::newlst(AMateria *materia)
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

void MateriaSource::addlstback(t_list **lst, t_list *add) 
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

void MateriaSource::freelst(t_list *head)
{
    t_list *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    this->_len = 0;
}

t_list* MateriaSource::getInventory() const {
    return this->_inventory;
}

int MateriaSource::getLen() const {
    return this->_len;
}


