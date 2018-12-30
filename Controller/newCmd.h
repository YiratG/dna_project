#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_NEWCMD_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_NEWCMD_H

#include "ICmd.h"

class newCmd: public ICmd
{
    SharedPtr<ICmd> create();
    void help();
    void runCmd(DataCollection* dnasData, std::vector<std::string> );

};
#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_NEWCMD_H
