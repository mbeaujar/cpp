#include "MateriaSource.hpp"

// Coplien Form

MateriaSource::MateriaSource() : _inventory(NULL) {}

MateriaSource::MateriaSource(MateriaSource const &copy) : _inventory(copyList(copy.getInventory())) {}

MateriaSource::~MateriaSource() {
    freelst(&this->_inventory);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy) {
    if (this == &copy)
        return *this;
    this->_inventory = copyList(copy.getInventory());
    return *this;
}

// Methods

void MateriaSource::learnMateria(AMateria *m) {
    if (lstLenght(this->_inventory) >= 4)
        return;
    addlstback(&this->_inventory, createCell(m));
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    t_list *tmp;

    tmp = this->_inventory;
    if (!tmp)
        return (NULL);
    while (tmp)
    {
        if (tmp->content->getType() == type)
        {
            AMateria *a;
            a = tmp->content;
            return a;
        }
        tmp = tmp->next;
    }
    return (NULL);
}


// Getters

t_list *MateriaSource::getInventory() const {
    return this->_inventory;
}