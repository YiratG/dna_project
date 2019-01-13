#include "ListCmd.h"
#include "CmdFactory.h"

bool ListCmd::reg = CmdFactory::getInstance()->registerToFactory("list",SharedPtr<ICmd> (new ListCmd));

std::string ListCmd::help()
{
    return "data of all data";
}
std::string ListCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    if(v.size()>1)
        return "command list need 1 argument\n";
    return dnasData->getAllDataDescription();
}


