#ifndef DNA__IDNA_H
#define DNA__IDNA_H
#include "Nucleotide.h"
#include <iostream>
#include<stdio.h>
#include "../usesLibraries/SharedPtr.h"

//using std::stringstream;
using std::string;

class IDna
{
public:
    virtual ~IDna(){}
//    virtual bool operator==(const char* s) const=0;
//    virtual bool operator==(const string & s) const=0;
//    virtual bool operator!=(const char* s) const=0;
//    virtual bool operator!=(const string & s) const=0;
//    virtual Nucleotide& operator[](size_t i)=0;
    virtual const Nucleotide operator [] (size_t indx) const = 0;

    virtual size_t get_length() const=0;
};




#endif //DNA__IDNA_H
