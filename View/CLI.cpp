#include <iostream>
#include "CLI.h"

std::string CLI::getInput()
{
    std::cout << "cmd >> ";
    std::string s;
    std::getline(std::cin , s);
    return s;

}

void CLI::printOutput(std::string s)
{
    std::cout << s << std::endl;
}
