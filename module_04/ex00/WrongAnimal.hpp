#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal;

class WrongAnimal {
    protected:
        std::string type;
    public:
        // Coplien Form
        WrongAnimal();
        WrongAnimal(std::string);
        WrongAnimal(WrongAnimal const &);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const &);

        // Methods
        virtual void makeSound() const;

        // Getters
        std::string getType() const;
};


#endif