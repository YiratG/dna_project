#include <cstring>
#include <sstream>
#include "DnaSequence.h"
#include "DnaReader.h"
#include "DnaWriter.h"

using std::cout;
using std::ostream;

void DnaSequence::initDna(const char *str)
{
    m_seq = validStr(str);
    m_len = strlen(str);
}

Nucleotide* DnaSequence::validStr(const char *str) const
{
    size_t len=strlen(str);
    if(len%3 != 0)
    {
        throw "invalide DNA length";
    }
    Nucleotide *arr=new Nucleotide[len];

    try {
        for (size_t i = 0; i < len; ++i) {
            arr[i] = str[i];
        }
    }
    catch (const char * ex)
    {
        delete[] arr;

    }
    return arr;
}

DnaSequence::DnaSequence(const char* seq)
{
    initDna(seq);
}

DnaSequence::DnaSequence(const string & seq)
{
    initDna(seq.c_str());
}

//DnaSequence::DnaSequence(const DnaSequence &other)
//{
//    m_len = other.m_len;
//    m_seq = new Nucleotide[m_len];
//    for (size_t i = 0; i < m_len; ++i) {
//        m_seq[i] = other.m_seq[i];
//    }
//}
DnaSequence::~DnaSequence()
{
//    cout<<"I'm deleting myself"<<std::endl;
    delete [] m_seq;
}

//DnaSequence& DnaSequence:: operator=(const DnaSequence& other)
//{
//    if ((this != &other)&&(m_seq!=NULL)) {
//        delete[] m_seq;
//    }
//
//    m_len = other.m_len;
//    m_seq = new Nucleotide[m_len];
//    for (size_t i = 0; i < m_len; ++i)
//    {
//        m_seq[i] = other.m_seq[i];
//    }
//    return *this;
//}
DnaSequence& DnaSequence::operator=(const char* s)
{
    Nucleotide *arr=validStr(s);
    if(m_seq !=NULL)
        delete [] m_seq;
    m_seq=arr;
    m_len=strlen(s);
    return *this;
}
DnaSequence& DnaSequence::operator=(const string &s)
{
    (*this)=s.c_str();
    return *this;
}
//bool DnaSequence:: operator==(const DnaSequence& other)const
//{
//    if(m_len != other.m_len)
//        return false;
//    for (size_t i = m_len-1; i >=0 ; --i)
//    {
//        if(m_seq[i] != other.m_seq[i])
//            return false;
//    }
//    return true;
//}
//bool DnaSequence::operator!=(const DnaSequence& other) const
//{
//    return !(*this == other);
//}

ostream& operator<<(ostream &os,const DnaSequence &ds)
{
    for (size_t i = 0; i < ds.m_len ; ++i)
    {
        os << ds.m_seq[i];
    }
    return os;
}


//
//bool DnaSequence::operator==(const char *s) const
//{
//    if(m_len != strlen(s))
//        return false;
//    for (size_t i = m_len-1; i >=0 ; --i)
//    {
//        if(m_seq[i] != s[i])
//            return false;
//    }
//    return true;
//}

//bool DnaSequence::operator==(const string &s) const
//{
//    return (*this == s.c_str());
//}
//
//bool DnaSequence::operator!=(const char *s) const
//{
//    return !(*this == s);
//}
//
//bool DnaSequence::operator!=(const string &s) const
//{
//    return !(*this == s.c_str());
//}

//DnaSequence DnaSequence::get_slice(size_t from, size_t to) {
//    return DnaSequence(*this,from,to);
//}

DnaSequence::DnaSequence(DnaSequence &other, size_t from, size_t to)
{
    if(from < to && to < other.m_len)
    {
        if((to-from)%3 == 0)
        {
            m_len = to - from;
            m_seq = new Nucleotide[m_len];
            for (size_t i = 0; i < m_len; ++i) {
                m_seq[i] = other.m_seq[i + from];
            }
        }
        else
        {
            throw "invalide slice as DNA";
        }
    }
    else
        throw "invalide index/es";
}

//DnaSequence DnaSequence::pair()
//{
//    DnaSequence temp;
//    temp.m_len=m_len;
//    temp.m_seq=new Nucleotide [m_len];
//    for (size_t i = 0; i < m_len; ++i)
//    {
//        temp.m_seq[i]=m_seq[m_len-1-i].mypair();
//    }
//    return temp;
//}

void DnaSequence::readFromFile(const char *fileName)
{
    DnaReader r(fileName);
    *this=r.DnaRead();
}
void DnaSequence::WriteToFile(const char *fileName)
{
    DnaWriter w(fileName);
    w.DnaWrite(*this);
}

std::ostream& DnaSequence::getSeqAsString(ostream& ss)
{
    for (size_t i = 0; i < m_len ; ++i)
    {
        ss << m_seq[i];
    }
    return ss;
}

Nucleotide& DnaSequence::operator[] (size_t indx)
{
    return m_seq[indx];
}

const Nucleotide& DnaSequence:: operator[] (size_t indx) const
{
    return m_seq[indx];
}

DnaSequence::DnaSequence()
{
    m_seq = NULL;
}
