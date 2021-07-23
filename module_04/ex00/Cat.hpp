#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"

class Cat;

class Cat : public Animal {
    public:
        // Coplien Form
        Cat();
        Cat(Cat const &);
        virtual ~Cat();
        Cat& operator=(Cat const &);

        // Methods
        void makeSound() const;
};


#endif