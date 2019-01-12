#include "CmdFactory.h"
#include "LoadCmd.h"
#include "SaveCmd.h"
#include "newCmd.h"
#include "ListCmd.h"


std::map<string,SharedPtr<ICmd> > CmdFactory::cmdMap = CmdFactory::initMap();

std::map<string, SharedPtr<ICmd> > CmdFactory::initMap()
{
    std::map<string, SharedPtr<ICmd> > s;
    return s;
}
SharedPtr<ICmd> CmdFactory::getCmd(std::string s)
{
    if(s == "new")
    {
        return SharedPtr<ICmd> (new newCmd());
    }
    if(s == "load")
    {
        return SharedPtr<ICmd> (new LoadCmd());
    }
    if(s == "save")
    {
        return SharedPtr<ICmd> (new SaveCmd());
    }
    if(s == "list")
    {
        return SharedPtr<ICmd> (new ListCmd());
    }
    return SharedPtr<ICmd> (NULL);
}

bool CmdFactory::registerToFactory(std::string cmdString,SharedPtr<ICmd> (* func)())
{
    cmdMap[cmdString] = func();
    return true;
}


