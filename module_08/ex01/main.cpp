#include "span.hpp"

/*
int main() 
{
	Span sp = Span(5);
	sp.addNumber(5);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	sp.addNumber(10);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	sp.addNumber(100);
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		sp.addNumber(100);
		sp.addNumber(100);
		sp.addNumber(100);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
*/
int main()
{
	{
		Span sp = Span(10);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::list<int> b(5, 10);
		sp.addNumber(b.begin(), b.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10100);
		std::list<int> b(10000, 10);
		sp.addNumber(b.begin(), b.end());
		sp.addNumber(1000000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}