#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_ICMD_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_ICMD_H

#include "vector"
#include <string>
#include "../usesLibraries/SharedPtr.h"
#include "../Model/DataCollection.h"

class ICmd
{
public:
    virtual SharedPtr<ICmd> create()=0;
    virtual void help()=0;
    virtual std::string runCmd(SharedPtr<DataCollection> dnasData,std::vector<std::string> )=0;

};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_ICMD_H
