#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();
		Dog& operator=(Dog const &assi);

		void makeSound() const;
};

#endif