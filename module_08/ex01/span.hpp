#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <algorithm>
#include <list>
#include <limits>
#include <iterator>

class Span {
	private:
		std::list<int> 	_a;
		unsigned int 	_size;
	public:
		// Coplien form
		Span(unsigned int);
		Span(Span const &);
		virtual ~Span();
		Span& operator=(Span const &);

		template <class Iterator>
		void addNumber(Iterator first, Iterator last ){
			for (; first != last; ++first)
			{
				if (this->_a.size() + 1 > this->_size)
					throw Span::OutOfTheLimits();
				this->_a.push_back(*first);
			}
		};

		// Methods
		void addNumber(int);
		int shortestSpan();
		int longestSpan();

		// Getters
		std::list<int> getStorage() const;
		int getsize() const;

		// exception
		class OutOfTheLimits : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Out of the limits";
				};
		};

		class NotEnoughNumbers : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Not enough numbers";
				};
		};
};

#endif