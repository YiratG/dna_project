#ifndef DNA__CMDFACTORY_H
#define DNA__CMDFACTORY_H

#include <map>
#include <string>
#include "ICmd.h"

using std::string;

class CmdFactory
{
public:
    static std::map<string,SharedPtr<ICmd> > cmdMap;
//    static void registerCmd(std::string, func)
    static SharedPtr<ICmd> getCmd(std::string);

};




#endif //DNA__CMDFACTORY_H
