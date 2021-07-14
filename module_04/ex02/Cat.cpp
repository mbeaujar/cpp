#include "Cat.hpp"

Cat::Cat()
{
	this->type = "cat";
	this->brain = new Brain;
	std::cout << this << " Cat constructor" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << this << " Cat destructor" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat& Cat::operator=(Cat const &assi)
{
	this->type = assi.getType();
	//delete this->brain;
	//*(this)->brain->getIdeas() = *assi.getBrain()->getIdeas();
	*this->brain = *assi.getBrain();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Grrr...." << std::endl;
}

Brain* Cat::getBrain() const {
	return this->brain;
}

std::string Cat::getType() const {
	return this->type;
}