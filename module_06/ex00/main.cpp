#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <string.h>

bool parse_string(std::string s)
{
    int i = 0;
    int dot = 0;

    while (s[i])
    {
        if (i == 0 && (s[0] == '-' || s[0] == '+'))
            i++;
        else if (s[i] == '.' && dot == 0) {
            i++;
            dot++;
        }
        else if (s[i] == 'f' && s[i + 1] == 0)
            i++;
        else if (s[i] < '0' || s[i] > '9')
            return false;
        else
            i++;
    }
    if (i == 0)
        return false;
    return true;
}

void toChar(double number)
{
    if (number < -128 || number > 127) {
        std::cout << "char: impossible" << std::endl;
    } else if (number < 32 || number > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
    }
}

void toInt(double number)
{
    if (number > 2147483647 || number < -2147483648) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(number) << std::endl;
    }
}

void toFloat(double number)
{
    if (number > std::numeric_limits<float>::max() || number < -std::numeric_limits<float>::max()) {
        std::cout << "float: impossible" << std::endl;
    } else {
        float nb = static_cast<float>(number);
        std::cout << std::fixed << std::setprecision(1) << "float: " << nb;
        std::cout << "f" << std::endl;
    }
}

void toDouble(double number)
{
    if (number > std::numeric_limits<double>::max() || number < -std::numeric_limits<double>::max()) {
        std::cout << "double: impossible" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << "double: " << number << std::endl;
    }
}

int notANumber()
{
    std::cout << "char: impossible" << "\n";
    std::cout << "int: impossible" << "\n";
    std::cout << "float: nanf" << "\n";
    std::cout << "double: nan" << std::endl;
    return 1;
}

int infinite(bool sign)
{
    std::cout << "int: impossible" << std::endl;
    std::cout << "char: impossible" << std::endl;
    if (sign == true)
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cout << "error: number of arguments is invalid" << std::endl;
        return 1;
    }
    if (strcmp(argv[1], "nan") == 0 || strcmp(argv[1], "nanf") == 0)
        return notANumber();
    if (strcmp(argv[1], "+inf") == 0 || strcmp(argv[1], "+inff") == 0)
        return infinite(true);
    if (strcmp(argv[1], "-inf") == 0 || strcmp(argv[1], "-inff") == 0)
        return infinite(false);
    if (parse_string(argv[1]) == false) {
        std::cout << "error: argument invalid" << std::endl;
        return 1;
    }
    double number = atof(argv[1]);
    toChar(number);
    toInt(number);
    toFloat(number);
    toDouble(number);
    return 0;
}