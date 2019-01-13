#ifndef DNA__CMDFACTORY_H
#define DNA__CMDFACTORY_H

#include <map>
#include <string>
#include "ICmd.h"

using std::string;

class CmdFactory
{
public:

    static CmdFactory* getInstance();
    bool registerToFactory(std::string, SharedPtr<ICmd> cmd);
    SharedPtr<ICmd> getCmd(std::string);

private:
    CmdFactory();
    static CmdFactory* instance;
    std::map<string,SharedPtr<ICmd> > cmdMap;

};



#endif //DNA__CMDFACTORY_H
