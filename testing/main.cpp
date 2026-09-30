#include <fstream>
#include <sstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
		return 1;
	
	std::ifstream input(argv[1]);
	if (!input)
		return 1;
    
    std::stringstream buffer;
    
    buffer << input.rdbuf();

    std::string content = buffer.str();
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty() || s2.empty()) 
	{
		return 1;
	}

	std::string inputName(argv[1]);
	std::string outputName(inputName + ".replace");

	std::ofstream outputFile(outputName.c_str());
	if (!outputFile)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	//std::cout << "Working..." << std::endl;


}