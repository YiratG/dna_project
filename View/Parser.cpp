#include <iostream>
#include "Parser.h"

std::vector<std::string> Parser::parsing(std::string str)
{
    std::string delim = " ";
    std::vector<std::string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delim, prev);
        if (pos == std::string::npos) pos = str.length();
        std::string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());


//    for (std::vector<std::string>::const_iterator i = tokens.begin(); i != tokens.end(); ++i)
//    {
//        std::cout << *i << ' ';

//    }
//    std::cout << std::endl;
    return tokens;
}
