#include "whatever.hpp"

template<typename T>
T max(T const &a, T const&b) {
	return (a >= b ? a : b);
}

int main() 
{
	int a = 5;
	int b = 6;
	std::cout << max<>(a, b) << std::endl;
	return (0);
}