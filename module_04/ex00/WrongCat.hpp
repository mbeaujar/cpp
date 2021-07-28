#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat;

class WrongCat : public WrongAnimal {
    public:
        // Coplien Form
        WrongCat();
        WrongCat(WrongCat const &);
        virtual ~WrongCat();
        WrongCat& operator=(WrongCat const &);

        // Methods
        void makeSound() const;
};


#endif