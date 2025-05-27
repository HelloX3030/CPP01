#include "include.hpp"
#include <fstream>
#include <iostream>
#include <string>

static std::string custom_replace(std::string str, std::string to_replace, std::string replace_with)
{
    size_t pos = 0;
    while ((pos = str.find(to_replace, pos)) != std::string::npos)
    {
        str.replace(pos, to_replace.length(), replace_with);
        pos += replace_with.length();
    }
    return str;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cerr << "Usage: " << argv[0] << " <filename> <string> <replace>" << std::endl, 1);

    std::string filename = argv[1];
    std::string str = argv[2];
    std::string replace = argv[3];

    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
        return (std::cerr << "Error: Could not open file " << filename << std::endl, 1);

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open())
        return (std::cerr << "Error: Could not create file " << filename << ".replace" << std::endl, 1);

    std::string line;
    while (std::getline(inputFile, line))
        outputFile << custom_replace(line, str, replace) << std::endl;
    return (0);
}
