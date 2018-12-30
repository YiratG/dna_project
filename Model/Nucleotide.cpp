#include "Nucleotide.h"
#include <stdio.h>

#include <cassert>



char Nucleotide::mypair()
{
    char c;
    switch(m_char)
    {
        case 'A':
            c= 'T';
        case 'C':
            c= 'G';
        case 'G':
            c= 'C';
        case 'T':
            c= 'A';
        default:
            assert(true);
    }
    return c;
}

Nucleotide& Nucleotide::operator=(char c)
{
    m_char=ValidChar(c);
    return *this;
}