#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include <iostream>
#include "Animal.hpp"

class WrongCat;

class WrongCat : public Animal {
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