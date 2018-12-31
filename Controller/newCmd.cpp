#include <sstream>
#include "newCmd.h"
#include "../Model/DnaSequence.h"

void newCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    if(v.size() < 2)
        return;

    size_t id = dnasData->getIncNum();
    std::stringstream name;

    if(v.size() == 2)
    {
        name << "seq" << id;
    }
    else
    {
        string opName = v[2].substr(1);
        if (!dnasData->isNameAlreadyUsed(opName))
            name << opName;
    }

    dnasData->addDna(SharedPtr<DnaAndMetaData>(new DnaAndMetaData(id,name.str(),SharedPtr<IDna>(new DnaSequence(v[1])))));
}

void newCmd::help()
{

}

SharedPtr<ICmd> newCmd::create()
{
    return SharedPtr<ICmd>();
}
