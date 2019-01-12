#include "SaveCmd.h"
#include "../Model/DnaWriter.h"
#include <sstream>

string SaveCmd::help()
{
    return "save <seq> [<filename>]";
}

std::string SaveCmd::runCmd(SharedPtr<DataCollection> dnasData, std::vector<std::string> v)
{
    if((v.size() < 2)||(v.size()>3))
        return "Command save needs 2 or 3 arguments\n";


    if((v.size() == 3)&&(!IsValidFileName(v[2])))
    {
        return "invalid file name\n";
    }

    std:: string s;
    std:: string seq;
    SharedPtr<DnaAndMetaData> dnaSequence;

    seq = v[1];

    if(IsValidSeqName(v[1]))
    {
        dnaSequence = dnasData->getDnaByName(seq.substr(1));
    }
    else
    {
        if(IsValidSeqId(v[1]))
        {
            std::stringstream ss(seq.substr(1));
            size_t id;
            ss >> id;
            dnaSequence = dnasData->getDnaById(id);
        }
        else
        {
            return "invalid sequence name or id\n";
        }

    }

    if(!dnaSequence)
        return "invalid sequence name or id\n";

    DnaWriter writer(v[1].c_str());

    writer.DnaWrite(dnaSequence->getDnaSeq());

//    ToDo add try and catch for Dna creation!!!


    return "file saved";
}

SharedPtr<ICmd> SaveCmd::create()
{
    return SharedPtr<ICmd>();
}
