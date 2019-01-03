#include "CmdFactory.h"
#include "newCmd.h"
#include "LoadCmd.h"

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
    return SharedPtr<ICmd> (NULL);
}