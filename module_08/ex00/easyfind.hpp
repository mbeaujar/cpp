#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>

class NotFound : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "occurence not found";
		};
};

template <typename T>
int	easyfind(T &a, int tofind)
{
	typename T::iterator ite = std::find(a.begin(), a.end(), tofind);
	if (ite == a.end())
		throw NotFound();
	return (*ite);
};

#endif