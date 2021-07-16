#include "mutantstack.hpp"


template <typename T>
MutantStack<T>::MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &copy) {
	std::stack<T>::operator=(copy);
	return *this;
}
