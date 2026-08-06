#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);

    std::ifstream input(argv[1]);
    if (!input)
        return (1);

    std::stringstream buffer;
    buffer << input.rdbuf();

    std::string content = buffer.str();
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
        return (1);

    std::ofstream output((std::string(argv[1]) + ".replace").c_str());
    if (!output)
        return (1);

    std::size_t start = 0;
    std::size_t pos;

    while ((pos = content.find(s1, start)) != std::string::npos)
    {
        output << content.substr(start, pos - start);
        output << s2;
        start = pos + s1.length();
    }

    output << content.substr(start);

    return (0);
}