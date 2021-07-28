#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack const &);
		virtual ~MutantStack() {};
		MutantStack& operator=(MutantStack const &);

		iterator begin() {
			return std::stack<T>::c.begin();
		};
		iterator end() {
			return std::stack<T>::c.end();
		};
};

#endif