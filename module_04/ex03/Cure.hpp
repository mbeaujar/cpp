#ifndef __CURE_HPP__
#define __CURE_HPP__


#include "AMateria.hpp"

class Cure;

class Cure : public AMateria {
    public:
        // Coplien Form
        Cure();
        Cure(Cure const &);
        virtual ~Cure();
        Cure &operator=(Cure const &);

        // Methods
        AMateria *clone() const;
        void use(ICharacter &target);
};




#endif