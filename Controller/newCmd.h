#ifndef DNA__NEWCMD_H
#define DNA__NEWCMD_H

#include "ICmd.h"

class newCmd: public ICmd
{
    SharedPtr<ICmd> create();
    void help();
    std::string runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v);

};
#endif //DNA__NEWCMD_H
