#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_LISTCMD_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_LISTCMD_H

#include "ICmd.h"

class ListCmd : public ICmd
{
public:
    virtual std::string help();
    virtual std::string runCmd(SharedPtr<DataCollection> dnasData,std::vector<std::string> );

private:
    static bool reg;
};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_LISTCMD_H
