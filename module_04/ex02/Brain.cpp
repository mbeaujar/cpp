#include "Brain.hpp"

// Coplien Form

Brain::Brain() {
    std::cout << "Brain created" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = "Food";
}

Brain::Brain(Brain &copy) {
    std::cout << "Brain created" << std::endl;
    std::string *tmp = copy.getIdeas();
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = tmp[i];
}

Brain::~Brain() {
    std::cout << "Brain died" << std::endl;
}

Brain &Brain::operator=(Brain &copy) {
    if (this == &copy)
        return *this;
    std::string *tmp = copy.getIdeas();
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = tmp[i];
    return *this;
}


// Getters

std::string *Brain::getIdeas() {
    return this->ideas;
}