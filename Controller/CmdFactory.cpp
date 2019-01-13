#include "CmdFactory.h"

CmdFactory* CmdFactory::instance = 0;


SharedPtr<ICmd> CmdFactory::getCmd(std::string s)
{
    return cmdMap[s];
}

bool CmdFactory::registerToFactory(std::string cmdString,SharedPtr<ICmd> cmd)
{
    cmdMap[cmdString] = cmd;
    return true;
}

CmdFactory *CmdFactory::getInstance()
{
    if (instance == 0)
    {
        instance = new CmdFactory();
    }

    return instance;
}

CmdFactory::CmdFactory()
{
}


