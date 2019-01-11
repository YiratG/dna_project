#include "Nucleotide.h"
#include <stdio.h>
#include <cassert>

Nucleotide::Nucleotide():m_char('X'){}

Nucleotide::Nucleotide(char c)
{
    if (!ValidChar((char)toupper(c)))
        throw ("invalid characters");
    m_char = (char)toupper((c));
}

Nucleotide& Nucleotide::operator= (char c)
{
    if (!ValidChar((char)toupper(c)))
        throw ("invalid characters");
    m_char = (char)toupper(c);
    return *this;
}

Nucleotide& Nucleotide::operator= (const Nucleotide& nuc)
{
    if (!ValidChar((char)toupper(nuc.m_char)))
        throw ("invalid characters");
    m_char = (char)toupper(nuc.m_char);
    return *this;
}

std::ostream& operator<< (std::ostream& os, const Nucleotide& n)
{
    os << n.m_char;
    return os;
}


bool Nucleotide::operator == (const Nucleotide &other)
{
    return(m_char == other.m_char);
}

bool Nucleotide::operator != (const Nucleotide &other)
{
    return(m_char != other.m_char);
}

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