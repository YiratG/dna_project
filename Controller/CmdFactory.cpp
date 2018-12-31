#include "CmdFactory.h"
#include "newCmd.h"

SharedPtr<ICmd> CmdFactory::getCmd(std::string s)
{
    if(s == "new")
    {
        return SharedPtr<ICmd> (new newCmd());
    }

    return SharedPtr<ICmd> (NULL);
}