#include "span.hpp"

// Coplien form

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const &copy) {
	*this = copy;
}

Span::~Span() {}

Span& Span::operator=(Span const &assi) {
	this->_a = assi.getStorage();
	this->_size = assi.getsize();
	return *this;
}

// Methods
void Span::addNumber(int n) {
	if (this->_a.size() + 1 > this->_size)
		throw Span::OutOfTheLimits();
	this->_a.push_back(n);
}

int Span::shortestSpan() {
	if (this->_a.size() < 2)
		throw Span::NotEnoughNumbers();
	std::list<int>::iterator it;
	std::list<int>::iterator ite;
	unsigned int len = UINT_MAX;
	int next_value;

	this->_a.sort();
	ite = this->_a.end();
	for (it = this->_a.begin(); it != ite; ++it)
	{
		next_value = *std::next(it, 1);
		if (static_cast<unsigned int>(next_value - *it) < len)
			len = next_value - *it;
	}
	return (len);
}

int Span::longestSpan() {
	if (this->_a.size() < 2)
		throw Span::NotEnoughNumbers();
	this->_a.sort();
	std::list<int>::iterator it = this->_a.begin();
	std::list<int>::iterator ite = this->_a.end();
	--ite;
	return *ite - *it;
}

// Getters

std::list<int> Span::getStorage() const {
	return this->_a;
}

int Span::getsize() const {
	return this->_size;
}

