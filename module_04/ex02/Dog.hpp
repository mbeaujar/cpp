#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();
		Dog& operator=(Dog const &assi);

		void makeSound() const;
		Brain* getBrain() const;
};

#endif