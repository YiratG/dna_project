#ifndef DNA_EXECUTABLE_H
#define DNA_EXECUTABLE_H

#include <string>
#include <vector>
#include "../View/Parser.h"
#include "../View/CLI.h"
#include "../Model/DataCollection.h"

class Executable
{
public:
    Executable();
    void run();

private:
    CLI cli;
    Parser p;
    SharedPtr<DataCollection> dc;
    std::string s;
    std::vector<std::string> v;


};


#endif //DNA_EXECUTABLE_H
