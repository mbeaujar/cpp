#include "Array.hpp"

int main() 
{
	{
		Array<int> a;
		try {
			std::cout << a[10] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<int> a(10);
		try {
			std::cout << "Display array: " << std::endl;
			for (int i = 0; i < 10; i++)
				std::cout << a[i] << " ";
			std::cout << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<int> a(10);
		try {
			a[5] = 10;
			Array<int> b;
			b = a;
			a[5] = 5;
			std::cout << "a: " << std::endl;
			for (int i = 0; i < 10; i++)
				std::cout << a[i] << " ";
			std::cout << std::endl;
			std::cout << "b: " << std::endl;
			for (int i = 0; i < 10; i++)
				std::cout << b[i] << " ";
			std::cout << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}