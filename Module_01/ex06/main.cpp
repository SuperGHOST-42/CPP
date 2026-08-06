#include "HarlFilter.hpp"

int main(int argc, char **argv)
{
    HarlFilter harl;
    int level = -1;
    int i;
    
    std::string levels[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    if (argc != 2)
        return (1);
    
    i = 0;
    while (i < 4)
    {
        if (levels[i] == argv[1])
        {
            level = i;
            break;
        }
        i++;
    }

    switch (level)
    {
        case 0:
            harl.complain("DEBUG");
            // fall through
        case 1:
            harl.complain("INFO");
            // fall through
        case 2:
            harl.complain("WARNING");
            // fall through
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Probably complaining about insignificant problems" 
                      << std::endl;
    }

    return (0);
}