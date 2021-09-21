#include "span.hpp"

// Coplien form

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const &copy) {
	*this = copy;
}

Span::~Span() {}

Span& Span::operator=(Span const &assi) {
	if (this == &assi)
		return *this;
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

unsigned int Span::shortestSpan() {
	if (_a.size() < 2)
		throw Span::NotEnoughNumbers();
	std::list<int>::iterator it;
	std::list<int>::iterator ite;
	unsigned int len = 4294967295;
	int next_value;

	_a.sort();
	ite = _a.end();
	for (it = _a.begin(); it != ite; ++it)
	{
		std::list<int>::iterator check = it;
		++check;
		next_value = *check;
		if (static_cast<unsigned int>(next_value - *it) < len)
			len = next_value - *it;
	}
	return (len);
}

unsigned int Span::longestSpan() {
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
