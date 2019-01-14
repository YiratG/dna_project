#ifndef DNA__NUCLEOTIDE_H
#define DNA__NUCLEOTIDE_H

#include <ctype.h>
#include <iostream>

class Nucleotide
{
public:
    explicit Nucleotide();
    explicit Nucleotide(char c);

    Nucleotide& operator=(char c);
    Nucleotide& operator= (const Nucleotide& nuc);

    //    operator char();
    Nucleotide mypair();

    bool operator == (const Nucleotide &other);
    bool operator!= (const Nucleotide &other);

    friend std::ostream& operator<<(std::ostream& os, const Nucleotide& n );

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


//inline Nucleotide::operator char()
//{
//    return m_char;
//}
//



#endif //DNA__NUCLEOTIDE_H
