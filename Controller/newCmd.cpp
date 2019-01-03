#include <sstream>
#include "newCmd.h"
#include "../Model/DnaSequence.h"

std::string newCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    if(v.size() < 2)
        return "too few arguments";

    std::string s;

    if(v.size() == 2)
    {
        s = dnasData->generateName();
    }
    else
    {
        s = dnasData->generateName(v[2].substr(1));
    }

    size_t id = dnasData->getIncNum();
    SharedPtr<DnaAndMetaData> newDna(new DnaAndMetaData(id, s, SharedPtr<IDna>(new DnaSequence(v[1]))));
    dnasData->addDna(newDna);

    return newDna->getDescription();
}

void newCmd::help()
{

}

SharedPtr<ICmd> newCmd::create()
{
    return SharedPtr<ICmd>();
}
