#include "include.hpp"
#include <fstream>
#include <iostream>
#include <string>

static std::string custom_replace(const std::string str, const std::string &to_replace, const std::string &replace_with)
{
    if (to_replace.empty())
        return str;
    if (to_replace == replace_with)
        return str;

    std::ostringstream result;
    size_t pos = 0;
    size_t found;

    while ((found = str.find(to_replace, pos)) != std::string::npos)
    {
        result << str.substr(pos, found - pos) << replace_with;
        pos = found + to_replace.length();
    }
    result << str.substr(pos);
    return result.str();
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

    std::ostringstream buffer;
    buffer << inputFile.rdbuf();
    std::string lines = buffer.str();
    outputFile << custom_replace(lines, str, replace);
    return (0);
}
