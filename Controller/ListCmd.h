#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_LISTCMD_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_LISTCMD_H

#include "ICmd.h"

class ListCmd : public ICmd
{
    virtual std::string help();
    virtual std::string runCmd(SharedPtr<DataCollection> dnasData,std::vector<std::string> );
};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_LISTCMD_H
