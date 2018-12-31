#include "Executable.h"
#include "CmdFactory.h"

void Executable::run()
{
     s = cli.getInput();
     v = p.parsing(s);
    (CmdFactory::getCmd(v[0]))->runCmd(dc,v);


}
