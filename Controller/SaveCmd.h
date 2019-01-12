#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_SAVECMD_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_SAVECMD_H


#include "ICmd.h"

class SaveCmd: public ICmd
{
public:
    SharedPtr<ICmd> create();
    std::string help();
    std::string runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v);
};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_SAVECMD_H
