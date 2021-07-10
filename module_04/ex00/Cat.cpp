#include "Cat.hpp"

Cat::Cat()
{
	Animal::type = "cat";
};

Cat::~Cat() {}

Cat::Cat(Cat const &copy)
{
	*this = copy;
};

Cat& Cat::operator=(Cat const &assi)
{
	Animal::type = assi.getType();
	return *this;
};

void Cat::makeSound() const
{
	std::cout << "Grrr...." << std::endl;
};