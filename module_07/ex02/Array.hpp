#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template <typename T>
class Array {
	private:
		T*	_array;
		unsigned int _size;
	public:
		// Coplien Form
		Array() : _array(new T[1]()), _size(0) {};
		Array(unsigned int n) : _array(new T[n]()), _size(n) {};
		Array(Array const &copy) {
			*this = copy;
		};
		virtual ~Array() {
			delete [] this->_array;
		};

		// Operator 
		Array& operator=(Array &assi) {
			if (this == &assi)
				return *this;
			delete [] this->_array;
			this->_array = new T[assi.size()]();
			this->_size = assi.size();
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = assi._array[i];
			return *this;
		};

		T& operator[](int i) {
			if (i < 0 || i > this->_size - 1)
				throw Array::OutOfTheLimits();
			return this->_array[i];
		};

		// Methods
		int size() const {
			return this->_size;
		};

		// Exceptions 
		class OutOfTheLimits : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Out of the limits";
				};
		};
};

#endif
