#include "Character.hpp"

// Coplien Form

Character::Character() : _inventory(NULL), _name("") {}

Character::Character(std::string name) : _inventory(NULL), _name(name) {}

Character::Character(Character const &copy) : _inventory(copyList(copy.getInventory())), _name(copy.getName()) {}

Character::~Character() {
    freelst(&this->_inventory);
}

Character &Character::operator=(Character const &copy) {
    if (this == &copy)
        return *this;
    this->_inventory = copyList(copy.getInventory());
    this->_name = copy.getName();
    return *this;
}


// Methods

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    if (lstLenght(this->_inventory) >= 4)
        return;
    addlstback(&this->_inventory, createCell(m));
}

void Character::unequip(int idx)
{
    t_list *tmp;

    if (!this->_inventory)
        return;
    tmp = this->_inventory;
    for (int i = 0; tmp && i < idx; ++i)
        tmp = tmp->next;
    if (tmp->previous)
        tmp->previous->next = tmp->next;
    if (tmp->next)
        tmp->next->previous = tmp->previous;
    if (tmp == this->_inventory)
        this->_inventory = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    t_list *tmp;

    if (idx < 0 || idx - 1 > lstLenght(this->_inventory))
        return;
    tmp = this->_inventory;
    for (int i = 0; tmp && i < idx; ++i)
        tmp = tmp->next;
    tmp->content->use(target);
}

// Getters

std::string const &Character::getName() const {
    return this->_name;
}

t_list* Character::getInventory() const {
    return this->_inventory;
}


// Linked List


t_list *createCell(AMateria *next)
{
    t_list *cell;
    try {
        cell = new t_list;
    } catch (std::bad_alloc) {
        std::cout << "Error: linked list : Bad alloc" << std::endl;
        return NULL;
    }
    cell->content = next;
    cell->next = NULL;
    cell->previous = NULL;
    return cell;
}

void addlstback(t_list **lst, t_list *next)
{
    t_list *tmp;

    if (!next)
        return;
    if (!*lst)
    {
        *lst = next;
        return;
    }
    tmp = *lst;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = next;
    next->previous = tmp;
}

void freelst(t_list **lst)
{
    t_list *tmp;

    if (!*lst)
        return;
    while (*lst)
    {
        tmp = *lst;
        *lst = (*lst)->next;
        free(tmp);
    }
    *lst = NULL;
}

int lstLenght(t_list *lst)
{
    int i = 0;
    for (; lst; i++)
        lst = lst->next;
    return (i);
}


t_list *copyList(t_list *lst)
{
    t_list *copy = NULL;

    if (!lst)
        return NULL;
    while (lst)
    {
        addlstback(&copy, createCell(lst->content));
        lst = lst->next;
    }
    return (copy);
}