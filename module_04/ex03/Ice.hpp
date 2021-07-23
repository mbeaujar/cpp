#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice;

class Ice : public AMateria {
    public:
        // Coplien Form
        Ice();
        Ice(Ice const &);
        virtual ~Ice();
        Ice &operator=(Ice const &);

        // Methods
        AMateria *clone() const;
        void use(ICharacter &target);
};


#endif