#ifndef DNA__NUCLEOTIDE_H
#define DNA__NUCLEOTIDE_H

#include <ctype.h>
#include <iosfwd>

class Nucleotide
{
public:
    Nucleotide();
    Nucleotide(char c);
    Nucleotide& operator=(char c);
    operator char();
    char mypair();
//    friend std::ostringstream& operator<<(std::ostringstream& os, const Nucleotide& n );
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
//
//std::ostringstream& operator<<(std::ostringstream &os, const Nucleotide& n)
//{
//    os << n.m_char;
//    return os;
//}


#endif //DNA__NUCLEOTIDE_H
