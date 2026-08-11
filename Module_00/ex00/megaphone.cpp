#include <iostream>

void    to_upper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        std::cout << static_cast<char>(std::toupper(str[i]));
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 1;
    while (i < argc)
    {
        to_upper(argv[i]);
        i++;
    }
    std::cout << std::endl;
}