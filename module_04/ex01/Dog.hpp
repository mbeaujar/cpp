#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog;

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        // Coplien Form
        Dog();
        Dog(Dog const &);
        virtual ~Dog();
        Dog& operator=(Dog const &);

        // Methods
        void makeSound() const;

        // Getters
        Brain* getBrain() const;
};


#endif