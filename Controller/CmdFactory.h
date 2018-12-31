#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_CMDFACTORY_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_CMDFACTORY_H

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




#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_CMDFACTORY_H
