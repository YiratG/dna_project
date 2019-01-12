#ifndef DNA__CMDFACTORY_H
#define DNA__CMDFACTORY_H

#include <map>
#include <string>
#include "ICmd.h"

using std::string;

class CmdFactory
{
public:
    CmdFactory(const std::map<string, SharedPtr<ICmd> > &cmdMap);

    static bool registerToFactory(std::string, SharedPtr<ICmd> (* func)());
    static SharedPtr<ICmd> getCmd(std::string);

private:
    static std::map<string,SharedPtr<ICmd> > initMap();
    static std::map<string,SharedPtr<ICmd> > cmdMap;


};




#endif //DNA__CMDFACTORY_H
