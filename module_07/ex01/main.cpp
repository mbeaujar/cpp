#include "iter.hpp"

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