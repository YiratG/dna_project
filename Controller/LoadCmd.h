#ifndef DNA__LOADCMD_H
#define DNA__LOADCMD_H


#include "ICmd.h"

class LoadCmd: public ICmd
{
public:
    SharedPtr<ICmd> create();
    std::string help();
    std::string runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v);
};


#endif //DNA__LOADCMD_H
