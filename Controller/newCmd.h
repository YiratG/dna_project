#ifndef DNA__NEWCMD_H
#define DNA__NEWCMD_H

#include "ICmd.h"
#include "CmdFactory.h"

class newCmd: public ICmd
{
public:
    std::string help();
    std::string runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v);

private:
    static bool reg;
};
#endif //DNA__NEWCMD_H
