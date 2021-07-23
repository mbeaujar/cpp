#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat;

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        // Coplien Form
        Cat();
        Cat(Cat const &);
        virtual ~Cat();
        Cat& operator=(Cat const &);

        // Methods
        void makeSound() const;

        // Getters
        Brain* getBrain() const;
};


#endif