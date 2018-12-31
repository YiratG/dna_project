
#ifndef DNA_ADDMOTATION_H
#define DNA_ADDMOTATION_H

#include "IDna.h"
#include "../usesLibraries/SharedPtr.h"

class AddMotation: public IDna
{
public:
     ~AddMotation(){};
     bool operator==(const AddMotation& other) const;
     bool operator==(const char* s) const;
     bool operator==(const string & s) const;
     bool operator!=(const AddMotation& other) const;
     bool operator!=(const char* s) const;
     bool operator!=(const string & s) const;
     Nucleotide& operator[](size_t i);

     size_t get_length() const;
//     IDna get_slice(size_t from, size_t to);
     void readFromFile(const char * fileName);
     void WriteToFile(const char *fileName);
    
private:
    SharedPtr<IDna> m_oSeq;
    size_t startIndex;
    size_t endIndex;
    Nucleotide* addSeq;
};
#endif //DNA_ADDMOTATION_H
