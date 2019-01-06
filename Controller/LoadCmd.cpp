#include "LoadCmd.h"
#include "../Model/DnaReader.h"

SharedPtr<ICmd> LoadCmd::create()
{
    return SharedPtr<ICmd>();
}

void LoadCmd::help()
{

}

std::string LoadCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    if((v.size() < 2)||(v.size()>3))
        return "too few arguments";

    std::string fileName = v[1];
    std:: string s;

    if(v.size() == 2)
    {
        std::size_t pos = fileName.find(".rawdna");
//        std::string onlyName = fileName.substr (pos);
        s = dnasData->generateName(fileName.erase(pos+1));
    }
    else
    {
        s = dnasData->generateName(v[2].substr(1));

    }
    size_t id = dnasData->getIncNum();
    DnaReader reader(fileName.c_str());

    dnasData->addDna(SharedPtr<DnaAndMetaData>(new DnaAndMetaData(id, s, SharedPtr<IDna>(new DnaSequence(reader.DnaRead())))));
    return "Done";
}

