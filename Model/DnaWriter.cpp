
#include "DnaWriter.h"

DnaWriter::DnaWriter(const char *fileName)
{
    outfile.open(fileName);

    if (!outfile.is_open())
        throw "Error by opening file";
}

DnaWriter::~DnaWriter()
{
    outfile.close();
}

void DnaWriter::DnaWrite(SharedPtr<IDna> ds)
{

    size_t len = ds->get_length();
    for (size_t i = 0; i < len; ++i)
    {
        outfile << ds->operator[](i);
    }
}
