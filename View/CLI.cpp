#include <iostream>
#include "CLI.h"

std::string CLI::getInput()
{
    std::cout << "enter a command :: ";
    std::string s;
    std::getline(std::cin , s);
    return s;

}
