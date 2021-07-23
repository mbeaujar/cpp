#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource {
    private:
        t_list *_inventory;
    public:
        // Coplien Form
        MateriaSource();
        MateriaSource(MateriaSource const &);
        virtual ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &);

        // Methods
        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);

        // Getters
        t_list* getInventory() const;

};


#endif