#include "DnaReader.h"
DnaReader::DnaReader(const char *fileName)
{
    infile.open(fileName);

    if(!infile.is_open())
        throw "Error by opening file";
    
}

DnaReader::~DnaReader()
{
    infile.close();
}


DnaSequence DnaReader::DnaRead()
{
    std::string seq;

    while(!infile.eof())
        {
            infile >> seq;
        }
    return DnaSequence(seq);
}
