#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &assi);

		void makeSound() const;
};

#endif