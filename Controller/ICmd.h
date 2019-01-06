#ifndef DNA__ICMD_H
#define DNA__ICMD_H

#include "vector"
#include <string>
#include "../usesLibraries/SharedPtr.h"
#include "../Model/DataCollection.h"

class ICmd
{
public:
    virtual ~ICmd();
    virtual SharedPtr<ICmd> create()=0;
    virtual void help()=0;
    virtual std::string runCmd(SharedPtr<DataCollection> dnasData,std::vector<std::string> )=0;

};


#endif //DNA__ICMD_H
