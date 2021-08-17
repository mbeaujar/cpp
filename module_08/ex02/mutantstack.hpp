#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() : std::stack<T>() {}

		MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}

		virtual ~MutantStack() {}

		MutantStack& operator=(MutantStack const &copy) {
			if (this == &copy)
				return *this;
			std::stack<T>::operator=(copy);
			return *this;
		}

		iterator begin() {
			return std::stack<T>::c.begin();
		}

		iterator end() {
			return std::stack<T>::c.end();
		}
};

#endif