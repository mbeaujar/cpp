/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:12:57 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/12 11:41:20 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
/* 
int main()
{
	std::cout << "--------- EX00 --------" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	const WrongAnimal *test = new WrongCat();
	const WrongCat *ok = new WrongCat();
	test->makeSound();
	ok->makeSound();
	delete meta;
	delete j;
	delete i;
	delete test;
	delete ok;
	std::cout << "--------- EX01 --------" << std::endl;
	Animal *array[10];
	for (int i = 0; i < 5; i++)
		array[i] = new Cat();
	for (int i = 5; i < 10; i++)
		array[i] = new Dog();
	std::cout << "Array of animal: " << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "#" << i << " " << array[i]->getType() << std::endl;
	for (int i = 0; i<10; i++)
		delete array[i];
	std::cout << "--------- DEEP COPY ----------" << std::endl;
	Cat *one = new Cat();
	Cat *two = new Cat();
	std::cout << "pointer of the brain for \"one\": " << one->getBrain() << std::endl;
	std::cout << "pointer of the brain for \"two\": " << two->getBrain() << std::endl;
	one->getBrain()->getIdeas()[0] = "Je suis une idée";
	std::cout << "one brain->ideas[0]: " << one->getBrain()->getIdeas()[0] << std::endl;
	*two = *one;
	std::cout << "pointer of the brain for \"two\": " << two->getBrain() << std::endl;
	std::cout << "two brain->ideas[0]: " << two->getBrain()->getIdeas()[0] << std::endl;
	delete one;
	delete two;
	//system("leaks a.out");
	return (1);
} 
 */
 int main()
{
	Dog *i = new Dog();
	Cat *j = new Cat();

	//IAnimal *test = new IAnimal();
	delete i;
	delete j;
	return (0);
} 