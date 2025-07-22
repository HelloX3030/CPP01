#include "include.hpp"

std::string custom_replace(const std::string str, const std::string &to_replace, const std::string &replace_with)
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
