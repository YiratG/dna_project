#include "ICmd.h"

ICmd::~ICmd()
{}

bool IsValidSeqName(string seqName)
{
    return seqName[0] == '@';
}

bool IsValidSeqId(string seqName)
{
    return seqName[0] == '#';
}

bool IsValidFileName(string fileName)
{
    std::size_t pos = fileName.find(".rawdna");
    return pos != std::string::npos;
}
