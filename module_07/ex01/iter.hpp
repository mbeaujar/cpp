#ifndef __ITER_HPP__
#define __ITER_HPP__

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



#endif