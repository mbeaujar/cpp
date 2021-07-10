#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat& operator=(WrongCat const &assi);
};


#endif
