#ifndef __WRONGWrongAnimal_HPP__
#define __WRONGWrongAnimal_HPP__

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &);
		WrongAnimal & operator=(WrongAnimal const &);

		virtual void makeSound() const;
		std::string getType() const;
};

#endif