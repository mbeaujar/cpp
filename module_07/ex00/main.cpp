#include "whatever.hpp"

/* int main() 
{
	{
		int a = 5;
		int b = 6;
		std::cout << "------------ INT -----------" << std::endl;
		std::cout << "max: " << max<int>(a, b) << std::endl;
		std::cout << "min: " << min<int>(a, b) << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "swap ..." << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	{
		float a = 5.5;
		float b = 6.6;
		std::cout << "------------ FLOAT -----------" << std::endl;
		std::cout << "max: " << max<float>(a, b) << std::endl;
		std::cout << "min: " << min<float>(a, b) << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "swap ..." << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	{
		double a = 5.5;
		double b = 6.6;
		std::cout << "------------ DOUBLE -----------" << std::endl;
		std::cout << "max: " << max<double>(a, b) << std::endl;
		std::cout << "min: " << min<double>(a, b) << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "swap ..." << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	{
		std::string a = "a";
		std::string b = "b";
		std::cout << "------------ STRING -----------" << std::endl;
		std::cout << "max: " << max<std::string>(a, b) << std::endl;
		std::cout << "min: " << min<std::string>(a, b) << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "swap ..." << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	return (0);
} */

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}