#ifndef DNA__READER_H
#define DNA__READER_H
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


#endif //DNA__READER_H
