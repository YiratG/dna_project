#include <sstream>
#include "newCmd.h"
#include "../Model/DnaSequence.h"

std::string newCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    std::string name;

    if(v.size() < 2 || v.size() > 3)
        return "Command new needs 2 or 3 arguments\n";

    if(v.size() == 2)
    {
        name = dnasData->generateName();
    }
    else
    {
        if(v[2][0] != '@')
            return "invalid sequence name\n";

        name = dnasData->generateName(v[2].substr(1));
    }

    SharedPtr<IDna> dnaSequence (new DnaSequence(v[1]));

    size_t id = dnasData->getIncNum();

    SharedPtr<DnaAndMetaData> newDna(new DnaAndMetaData(id, name, dnaSequence));

    dnasData->addDna(newDna);

    return newDna->getDescription();
}



std::string newCmd::help()
{
    return "new <seq> [name]";
}


SharedPtr<ICmd> newCmd::create()
{
    return SharedPtr<ICmd>();
}
