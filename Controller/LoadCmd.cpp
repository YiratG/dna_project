#include "LoadCmd.h"
#include "../Model/DnaReader.h"

SharedPtr<ICmd> LoadCmd::create()
{
    return SharedPtr<ICmd>();
}

std::string LoadCmd::help()
{
    return " load filename";
}

std::string LoadCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    if((v.size() < 2)||(v.size()>3))
        return "Command load needs 2 or 3 arguments\n";

    std::string fileName = v[1];
    std:: string s;

    if(v.size() == 2)
    {
        if(!IsValidFileName(fileName))
            return "invalid file name\n";

        std::size_t pos = fileName.find(".rawdna");
        s = dnasData->generateName(fileName.erase(pos));
    }
    else
    {
        if(!IsValidSeqName(v[2]))
            return "invalid sequence name\n";
        s = dnasData->generateName(v[2].substr(1));

    }

    DnaReader reader(v[1].c_str());

    SharedPtr<IDna> dnaSequence (new DnaSequence(reader.DnaRead()));
//    ToDo add try and catch for Dna creation!!!

    size_t id = dnasData->getIncNum();

    SharedPtr<DnaAndMetaData> newDna (new DnaAndMetaData(id, s,dnaSequence ));

    dnasData->addDna(newDna);

    return newDna->getDescription();
}

