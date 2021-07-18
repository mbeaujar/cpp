#include "Point.hpp"

/* 

		A(0,5) 

			P1(5,6)			C(5,10)  P2(5,15)

		B(10,5)
 */


int main()
{
	Point a(0, 5);
	Point b(10, 5);
	Point c(5, 10);
	Point point1(5, 6);
	Point point2(5, 15);

	std::cout << std::boolalpha << "Point is inside: " << bsp(a, b, c, point1) << std::endl;
	std::cout << std::boolalpha << "Point is inside: " << bsp(a, b, c, point2) << std::endl;
	return (0);
}