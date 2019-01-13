#include "Executable.h"
#include "CmdFactory.h"

void Executable::run()
{
    int i=10;
    while(i--)
    {
        s = cli.getInput();
        v = p.parsing(s);
        SharedPtr<ICmd> ptr =(CmdFactory::getInstance()->getCmd(v[0]));
        if(ptr)
        {
            string feedback = ptr->runCmd(dc,v);
            cli.printOutput(feedback);
        }
    }
}

Executable::Executable()
{
    dc = SharedPtr<DataCollection> (new DataCollection());
}
