#include <sstream>
#include "DnaAndMetaData.h"
#include "DnaSequence.h"

DnaAndMetaData::DnaAndMetaData(size_t id, std::string name, SharedPtr<IDna> DnaSeq, char staus):m_id(id),
                                                                                                m_name(name),
                                                                                                m_dnaSeq(DnaSeq),
                                                                                                m_status(staus) {}

string DnaAndMetaData::getName() const
{
    return m_name;
}

size_t DnaAndMetaData::getId() const
{
    return m_id;
}

string DnaAndMetaData::getDescription() const
{
    std::stringstream s;
    s << "[" << m_id << "] " << m_name << ": ";
    size_t len = m_dnaSeq->get_length();
    for (size_t i=0; i<len && i<40; ++i )
    {
        s << m_dnaSeq->operator[](i);
    }
    return s.str();
}

SharedPtr<IDna> DnaAndMetaData::getDnaSeq() const
{
    return m_dnaSeq;
}

char DnaAndMetaData::getStatus() const
{
    return m_status;
}
