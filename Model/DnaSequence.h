#ifndef DNA__DNASEQUENCE_H
#define DNA__DNASEQUENCE_H
#include "IDna.h"


class DnaSequence:public IDna
{
public:

    DnaSequence();
    explicit DnaSequence(const char* s);
    explicit DnaSequence(const string &s);
    ~DnaSequence();

    DnaSequence& operator=(const char* s);
    DnaSequence& operator=(const string & s);

//    bool operator==(const DnaSequence& other) const;
//    bool operator==(const char* s) const;
//    bool operator==(const string & s) const;
//    bool operator!=(const DnaSequence& other) const;
//    bool operator!=(const char* s) const;
//    bool operator!=(const string & s) const;
    Nucleotide& operator[](size_t i);
    const Nucleotide& operator[] (size_t indx) const;

    friend std::ostream& operator<<(std::ostream& os,const DnaSequence& ds);
    std::ostream& getSeqAsString(std::ostream& ss);
    size_t get_length() const;
//    DnaSequence get_slice(size_t from, size_t to);
//    DnaSequence pair();
//    void readFromFile(const char * fileName);
//    void WriteToFile(const char *fileName);

private:
    void initDna(const char * str);
    Nucleotide* validStr(const char * str)const;
    DnaSequence(DnaSequence & other,size_t from, size_t to);

    Nucleotide* m_seq;
    size_t m_len;

};




inline size_t DnaSequence::get_length() const
{
    return m_len;
}





#endif //DNA__DNASEQUENCE_H
