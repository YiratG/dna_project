
#ifndef DNA_DNAWRITER_H
#define DNA_WRITER_H
#include <fstream>
#include "DnaSequence.h"
class DnaWriter {
public:

    DnaWriter(const char *fileName);
    ~DnaWriter();
    void DnaWrite( DnaSequence& ds);
private:
    std::ofstream outfile;

};




#endif //DNA_WRITER_H
