#include "ListCmd.h"

std::string ListCmd::help()
{
    return "data of all data";
}
std::string ListCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string>)
{
    return dnasData->getAllDataDescription();
}


