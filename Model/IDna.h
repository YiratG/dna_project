#ifndef DNA__IDNA_H
#define DNA__IDNA_H
#include "Nucleotide.h"
#include <iostream>
#include<stdio.h>

using std::stringstream;
using std::string;

class IDna
{
public:
    virtual ~IDna(){}
    virtual bool operator==(const char* s) const=0;
    virtual bool operator==(const string & s) const=0;
    virtual bool operator!=(const char* s) const=0;
    virtual bool operator!=(const string & s) const=0;
    virtual Nucleotide& operator[](size_t i)=0;

    virtual std::stringstream& getSeqAsString(stringstream& ss)=0;
    virtual size_t get_length() const=0;
    virtual void readFromFile(const char * fileName)=0;
    virtual void WriteToFile(const char *fileName)=0;
};



//std::ostringstream& operator<<(std::ostringstream &ss ,IDna *ds)
//{
////    int len = ds->get_length();
//    for(size_t i =0;  i < 40 ;++i)
//    {
//        ss << (ds->operator[](i));
//    }
//
//    return ss;
//}

#endif //DNA__IDNA_H
