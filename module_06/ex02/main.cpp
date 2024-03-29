/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:36:52 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/09 22:40:39 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
	return (((((h1 * 2654435789U) + h2) * 2654435789U)) + h3);
}

Base *return_a()
{
	return new A;
}

Base *return_b()
{
	return new B;
}

Base *return_c()
{
	return new C;
}

Base *generate(void)
{
	Base *(*f[3])() = {&return_a, &return_b, &return_c};
	return f[rand() % 3]();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try {
		A &test = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)test;
	} catch (std::bad_cast &b) {}
	try {
		B &test = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)test;
	} catch (std::bad_cast &b) {}
	try {
		C &test = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)test;
	} catch (std::bad_cast &b) {}
}
 
int main()
{
	struct timeval time;
	gettimeofday(&time, NULL);
	srand(hash3(time.tv_sec, time.tv_usec, getpid()));

	for (int i = 0; i < 3; i++)
	{
		std::cout << "-------- TEST #" << i << " -----------" << std::endl;
		Base *test = generate();
		std::cout << "From pointer: ";
		identify(test);
		std::cout << "From reference: ";
		identify(*test);
		delete test;
	}
	return (0);
}