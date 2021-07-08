#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include "Base.hpp"

unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return (((((h1 * 2654435789U) + h2) * 2654435789U)) + h3);
}

Base *return_a() {
    return new A;
}

Base *return_b() {
    return new B;
}

Base *return_c() {
    return new C;
}

Base * generate(void)
{
    Base* (*f[3])() = { &return_a, &return_b, &return_c };
    return f[rand() % 3]();
}

void identify(Base* p)
{

}

void identify(Base& p) 
{

}


int main()
{
    struct timeval time;
    gettimeofday(&time, NULL);
    srand(hash3(time.tv_sec, time.tv_usec, getpid()));

    return (0);
}