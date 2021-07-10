#include "Brain.hpp"

Brain::Brain() {
	std::cout << this << " Brain constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << this << " Brain destructor" << std::endl;
}

Brain::Brain(Brain &copy) {
	*this = copy;
}

Brain& Brain::operator=(Brain &assi) {
	std::string *tmp = assi.getIdeas();
	for (int i = 0; i<100; i++)
		this->ideas[i] = tmp[i];
	//this->ideas = assi.getIdeas();
	(void)assi;
	return *this;
}

std::string* Brain::getIdeas() {
	return this->ideas;
}