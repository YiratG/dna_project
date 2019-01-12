#ifndef DNA__NEWCMD_H
#define DNA__NEWCMD_H

#include "ICmd.h"
#include "CmdFactory.h"

class newCmd: public ICmd
{
public:
    static SharedPtr<ICmd> create();
    std::string help();
    std::string runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v);

private:
    static bool registerToFactory;
};
#endif //DNA__NEWCMD_H
