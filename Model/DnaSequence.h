
#ifndef DNA_DNASEQUENCE_H
#define DNA_DNASEQUENCE_H
#include "IDna.h"


class DnaSequence:public IDna
{
public:


    DnaSequence();
    DnaSequence(const char* s);
    explicit DnaSequence(const string &s);
    DnaSequence(const DnaSequence& other);
    ~DnaSequence();

    DnaSequence& operator=(const DnaSequence& other);
    DnaSequence& operator=(const char* s);
    DnaSequence& operator=(const string & s);

    bool operator==(const DnaSequence& other) const;
    bool operator==(const char* s) const;
    bool operator==(const string & s) const;
    bool operator!=(const DnaSequence& other) const;
    bool operator!=(const char* s) const;
    bool operator!=(const string & s) const;
    Nucleotide& operator[](size_t i);
    friend ostream& operator<<(ostream& os,const DnaSequence& ds);

    size_t get_length() const;
    DnaSequence get_slice(size_t from, size_t to);
//    DnaSequence pair();
    void readFromFile(const char * fileName);
    void WriteToFile(const char *fileName);

private:
    void initDna(const char * str);
    Nucleotide* validStr(const char * str)const;
    DnaSequence(DnaSequence & other,size_t from, size_t to);

    Nucleotide* m_seq;
    size_t m_len;

};

inline Nucleotide & DnaSequence::operator[](size_t i)
{
    if(i >= m_len)
        throw "out Of Range";
    return m_seq[i];
}


inline size_t DnaSequence::get_length() const
{
    return m_len;
}





#endif //DNA_DNASEQUENCE_H
