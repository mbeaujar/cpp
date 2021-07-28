#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
 
int main()
{
    {
        std::cout << "---------- EX00 ------------" << std::endl;
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        const WrongAnimal *a = new WrongAnimal();
        const WrongAnimal *b = new WrongAnimal();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        a->makeSound();
        b->makeSound();
        delete meta;
        delete i;
        delete j;
        delete a;
        delete b;
    }
    {
        std::cout << "---------- EX01 ------------" << std::endl;
        Cat *a = new Cat();


        std::cout << "-------- DEEP COPY ---------" << std::endl;
        std::cout << "Brain: " << a->getBrain()->getIdeas()[0] << std::endl;
        a->getBrain()->getIdeas()[0] = "NotFood";
        std::cout << "Brain: " << a->getBrain()->getIdeas()[0] << std::endl;
        Cat *b = new Cat();
        *b = *a;
        std::cout << "Brain: " << b->getBrain()->getIdeas()[0] << std::endl;
        delete a;
        delete b;
        std::cout << "----------------------------" << std::endl;
        Animal *array[10];
        for (int i = 0; i < 5; ++i)
            array[i] = new Cat();
        for (int i = 5; i < 10; ++i)
            array[i] = new Dog();
        std::cout << "----------------- Array of Animal ------------------" << std::endl;
        for (int i = 0; i < 10; ++i)
            std::cout << "#" << i << " " << array[i]->getType() << std::endl;
        for (int i = 0; i < 10; ++i)
            delete array[i];

    }
    return (0);
}
/*
int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; //should not create a leak
    delete i;
}*/