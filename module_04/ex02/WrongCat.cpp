#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongAnimal::type = "WrongCat";
};

WrongCat::~WrongCat() {}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
};

WrongCat& WrongCat::operator=(WrongCat const &assi)
{
	WrongAnimal::type = assi.getType();
	return *this;
};