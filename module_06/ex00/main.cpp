#include <iostream>
#include <string>

bool    check_str(std::string str)
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

int main(int argc, char *argv[])
{
    double number;
    
    if (argc != 2)
        return (1);
    if (check_str(argv[1]) == false)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if(static_cast<std::string>(argv[1]) == "nan")
        {
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        }
        else
        {
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
        }
        
        return (1);
    }
    const char *str = "-50.0";
    number = std::stod(str);
    std::cout << number << std::endl;
    
    return (0);
}