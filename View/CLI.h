#ifndef DNA_CLI_H
#define DNA_CLI_H

#include "../Controller/Executable.h"
#include "../Controller/Parser.h"


class CLI

public:
    void run();
private:
    Executable ex;
    Parser ps;
};


#endif //DNA_CLI_H
