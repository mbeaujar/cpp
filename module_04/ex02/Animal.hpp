#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal;

class Animal {
    protected:
        std::string type;
    public:
        // Coplien Form
        Animal();
        Animal(std::string);
        Animal(Animal const &);
        virtual ~Animal();
        Animal& operator=(Animal const &);

        // Methods
        virtual void makeSound() const = 0;

        // Getters
        std::string getType() const;
};


#endif