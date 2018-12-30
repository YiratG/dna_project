#ifndef DNA_IDNA_H
#define DNA_IDNA_H
#include "Nucleotide.h"
#include <iostream>
#include<stdio.h>

using std::ostream;
using std::endl;
using std::string;

class IDna
{
public:
    virtual ~IDna(){};
    virtual bool operator==(const char* s) const=0;
    virtual bool operator==(const string & s) const=0;
    virtual bool operator!=(const char* s) const=0;
    virtual bool operator!=(const string & s) const=0;
    virtual Nucleotide& operator[](size_t i)=0;

    virtual size_t get_length() const=0;
    virtual void readFromFile(const char * fileName)=0;
    virtual void WriteToFile(const char *fileName)=0;

};
#endif //DNA_IDNA_H
