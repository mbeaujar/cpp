#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack();
		MutantStack(MutantStack const &);
		virtual ~MutantStack();
		MutantStack& operator=(MutantStack const &);

		iterator begin();
		iterator end();
};



#endif