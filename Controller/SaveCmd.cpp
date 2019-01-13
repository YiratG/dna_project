#include "SaveCmd.h"
#include "../Model/DnaWriter.h"
#include "CmdFactory.h"
#include <sstream>

bool SaveCmd::reg = CmdFactory::getInstance()->registerToFactory("save",SharedPtr<ICmd> (new SaveCmd));

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

    //ToDo to check what map returns if value not exiats

    if(!dnaSequence)
        return "invalid sequence name or id\n";
    std::stringstream fileName;

    if(v.size() == 3)
    {
        fileName << v[2];
    }
    else
    {
        fileName << dnaSequence->getName()<<".rawdna";

    }

    DnaWriter writer(fileName.str().c_str());

    writer.DnaWrite(dnaSequence->getDnaSeq());
    dnaSequence->setStatus('-');

    //    ToDo add try and catch for Dna creation!!!


    return "file saved";
}

SharedPtr<ICmd> SaveCmd::create()
{
    return SharedPtr<ICmd>();
}
