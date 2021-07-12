#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "IAnimal.hpp"

class Dog : public IAnimal {
	private:
		std::string type;
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();
		Dog& operator=(Dog const &assi);

		void makeSound() const;
		Brain* getBrain() const;
		std::string getType() const;
};

#endif