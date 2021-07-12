#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "IAnimal.hpp"

class Cat : public IAnimal {
	private:
		std::string type;
		Brain *brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &assi);

		void makeSound() const;
		Brain* getBrain() const;
		std::string getType() const;
};

#endif