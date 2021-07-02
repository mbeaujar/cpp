/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:36:06 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 14:44:18 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

t_list*  Squad::array = 0;
int     Squad::len = 0;
int     Squad::count = 0;

Squad::Squad() {
    this->nb = this->count;
    this->count++;
}

Squad::~Squad() {
    freelist(this->array);
}

Squad::Squad(Squad const & copy) {
    *this = copy;
}

Squad & Squad::operator=(Squad const & copy) {
    freelist(this->array);
    this->array = copy.getArray();
    this->nb = copy.getNb();
    this->len = copy.getCount();
    return *this;
}


/* Linked list */

t_list *newlst(ISpaceMarine *unit) {
    t_list *neww;

    try {
        neww = new t_list;
    } catch (std::bad_alloc) {
        return NULL;
    }
    neww->unit = unit;
    neww->next = NULL;
    return neww;
}

void Squad::addlist(t_list **head, t_list *add)
{
    t_list *tmp = *head;
    this->len++;
    if (!*head)
    {
        *head = add;
        return;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = add; 
}

void Squad::freelist(t_list *head) {
    t_list *tmp;
    
    while (head)
    {
        tmp = head;
        head = head->next;
        delete tmp->unit;
        delete tmp;
    }
    this->len = 0;
}

bool Squad::is_in_array(ISpaceMarine *newMarine) {
    if (newMarine == NULL) {
        std::cout << "error: push: wrong unit" << std::endl;
        return true;
    }
    t_list *tmp;
    tmp = this->array;
    while (tmp)
    {
        if (tmp->unit == newMarine) {
            std::cout << "error: push: unit already in the squad" << std::endl;
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

int Squad::push(ISpaceMarine *add) {
    if (is_in_array(add))
        return -1; 
    addlist(&this->array, newlst(add));
    return this->len;
}


/* Getters */

ISpaceMarine* Squad::getUnit(int nb) const {
    t_list *tmp;

    tmp = this->array;
    while (tmp && nb--)
        tmp = tmp->next;
    return tmp->unit;
}

int Squad::getCount() const {
    int i = 0;
    t_list *tmp = this->array;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return i;
}

t_list* Squad::getArray() const {
    return this->array;
}

int Squad::getNb() const {
    return this->nb;
}