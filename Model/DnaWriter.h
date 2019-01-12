
#ifndef DNA__DNAWRITER_H
#define DNA__WRITER_H
#include <fstream>
#include "DnaSequence.h"
class DnaWriter {
public:

    DnaWriter(const char *fileName);
    ~DnaWriter();
    void DnaWrite(SharedPtr<IDna> ds);
private:
    std::ofstream outfile;

};




#endif //DNA__WRITER_H
