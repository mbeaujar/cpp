#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class AMateria {
    protected:
        std::string _type;
    public:
        // Coplien Form
        AMateria();
        AMateria(std::string const &type);
        AMateria(AMateria const &);
        virtual ~AMateria();
        AMateria &operator=(AMateria const &);

        // Methods
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);

        // Getters
        std::string const &getType() const; //Returns the materia type
};

#endif