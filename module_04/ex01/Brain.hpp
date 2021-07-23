#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain;

class Brain {
    private:
        std::string ideas[100];
    public:
        // Coplien Form
        Brain();
        Brain(Brain &);
        virtual ~Brain();
        Brain &operator=(Brain &);

        // Getters
        std::string *getIdeas();
};


#endif