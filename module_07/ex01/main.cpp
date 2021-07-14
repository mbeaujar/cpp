#include <iostream>

template <typename T>
void iter(T *array, int length, void (*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void increment(T &a)
{
	a += 1;
}

template <typename T>
void toupper(T &a)
{
	for (int i = 0; a[i]; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
}

template<typename T>
void print(T *array, int length)
{
	std::cout << "array: ";
	for (int i = 0; i < length; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main()
{
	{
		std::cout << "----- INT --------" << std::endl;
		int array[] = { 1, 2, 3, 4, 5 };
		print<int>(array, 5);
		iter<int>(array, 5, increment);
		print<int>(array, 5);
	}
	{
		std::cout << "----- STRING --------" << std::endl;
		std::string array[] = { "bonjour", "je", "suis"};
		print<std::string>(array, 3);
		iter<std::string>(array, 3, toupper);
		print<std::string>(array, 3);
	}
	return (0);
}