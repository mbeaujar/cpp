#include <iostream>

int main()
{
    int f = 42;
    float nb = static_cast<float>(f);
    std::cout << nb << "f" << std::endl;
    nb = 42.0f;
    char c = static_cast<char>(nb);
    std::cout << c << std::endl;
    double nb_ = static_cast<double>(nb);
    std::cout << nb_ << std::endl;
    return (0);
}