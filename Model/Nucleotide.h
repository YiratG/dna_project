#ifndef DNA_NUCLEOTIDE_H
#define DNA_NUCLEOTIDE_H

#include <ctype.h>

class Nucleotide
{
public:
    Nucleotide();
    Nucleotide(char c);
    Nucleotide& operator=(char c);
    operator char();
    char mypair();

private:
    char ValidChar(char c);

    char m_char;
};

inline char Nucleotide::ValidChar(char c)
{
    c=toupper(c);
    if((c!='A')&& (c!='C')&&(c!='G')&&(c!='T'))
        throw "invalide char in dna";
    return c;
}

inline Nucleotide::Nucleotide(char c):m_char(ValidChar(c))
{
}

inline Nucleotide::Nucleotide():m_char('A')
{
}
inline Nucleotide::operator char()
{
    return m_char;
}
#endif //DNA_NUCLEOTIDE_H
