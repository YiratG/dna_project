#include "Executable.h"
#include "CmdFactory.h"

void Executable::run()
{
    int i=10;
    while(i--)
    {
        std::string s = cli.getInput();
        std::vector<std::string> v = p.parsing(s);
        (CmdFactory::getCmd(v[0]))->runCmd(dc,v);
    }



}

Executable::Executable()
{
    dc = SharedPtr<DataCollection>(new DataCollection());
}
