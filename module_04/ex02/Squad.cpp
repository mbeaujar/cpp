/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:36:06 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 19:17:52 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

t_list*  Squad::array = 0;
int     Squad::len = 0;
int     Squad::count = 0;

void freelist(t_list *head);

Squad::Squad() {
    this->nb = this->count;
    this->count++;
}

Squad::~Squad() {
    freelist(this->array);
}

Squad::Squad(Squad const & copy) {
    (void)copy;
}

Squad & Squad::operator=(Squad const & copy) {
    (void)copy;
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

void addlist(t_list **head, t_list *add)
{
    t_list *tmp = *head;
    if (!*head)
    {
        *head = add;
        return;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = add;    
}

void freelist(t_list *head) {
    t_list *tmp;
    
    while (head)
    {
        tmp = head;
        head = head->next;
        delete tmp->unit;
        delete tmp;
    }
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