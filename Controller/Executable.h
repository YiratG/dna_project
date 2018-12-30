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
    void run();

private:
    CLI cli;
    Parser p;
    DataCollection dc;

};


#endif //DNA_EXECUTABLE_H
