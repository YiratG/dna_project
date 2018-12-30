#ifndef DNA_READER_H
#define DNA_READER_H
#include <fstream>
#include "DnaSequence.h"

class DnaReader {
public:
	DnaReader(const char *fileName);
	~DnaReader();
    DnaSequence DnaRead();
private:
    std::ifstream infile;
    
};


#endif //DNA_READER_H
