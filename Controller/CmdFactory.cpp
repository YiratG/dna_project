#include "CmdFactory.h"
#include "newCmd.h"
#include "LoadCmd.h"
#include "SaveCmd.h"

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
    return SharedPtr<ICmd> (NULL);
}