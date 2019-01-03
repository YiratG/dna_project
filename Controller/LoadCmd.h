#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_LOADCMD_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_LOADCMD_H


#include "ICmd.h"

class LoadCmd: public ICmd
{
public:
    SharedPtr<ICmd> create();
    void help();
    std::string runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v);
};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_LOADCMD_H
