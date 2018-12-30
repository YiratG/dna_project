#include "Executable.h"

void Executable::run()
{
    std::string s = cli.getInput();
    std::vector<std::string> v = p.parsing(s);

}
