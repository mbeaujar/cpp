#include <iostream>
#include <string>
#include <limits>

bool check_str(std::string str)
{
    int dot = 0;
    for (int i = 0; str[i]; i++)
    {
        if (i == 0 && (str[i] == '-' || str[i] == '+'))
            i++;
        if (str[i] == '.')
            dot++;
        if (dot > 1)
            return false;
        if ((str[i] > '9' || str[i] < '0') && str[i] != 'f' && str[i] != '.')
            return false;
        if (str[i] == 'f' && i != static_cast<int>(str.length()) - 1)
            return false;
    }
    return true;
}

void print_error(char *argv[], bool parsing)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (static_cast<std::string>(argv[1]) == "nan")
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (parsing == false)
    {
        if (argv[1][0] == '-')
        {
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        else
        {
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        }
    }
}

// std::numerci_limits<double>::max();
void toFloat(char *argv[])
{
    float nb;
    std::cout << "float: ";
    try
    {
        nb = std::stof(argv[1]);
    }
    catch (std::exception &e)
    {
        if (argv[1][0] == '-')
            std::cout << "-inff" << std::endl;
        else
            std::cout << "+inff" << std::endl;
        return;
    }
    if (nb == static_cast<int>(nb))
        std::cout << nb << ".0f" << std::endl;
    else
        std::cout << nb << "f" << std::endl;
}

void toChar(double number)
{
    char nb = static_cast<char>(number);
    std::cout << "char: ";
    if (number < CHAR_MIN || number > CHAR_MAX)
        std::cout << "impossible" << std::endl;
    else if (nb > 32 && nb < 127)
        std::cout << "'" << nb << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void toInt(double number)
{
    int nb = static_cast<int>(number);
    std::cout << "int: ";
    if (number > INT_MAX || number < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << nb << std::endl;
}

void toDouble(double number)
{
    std::cout << "double: " << number;
    if (number == static_cast<int>(number))
        std::cout << ".0" << std::endl;
    else
        std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    double number;

    if (argc != 2)
        return (1);
    if (check_str(argv[1]) == false)
    {
        print_error(argv, true);
        return (1);
    }
    try
    {
        number = std::stod(argv[1]);
    }
    catch (std::exception &e)
    {
        print_error(argv, false);
        return (1);
    }
    toChar(number);
    toInt(number);
    toFloat(argv);
    toDouble(number);
    return (0);
}