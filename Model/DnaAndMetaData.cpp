#include <sstream>
#include "DnaAndMetaData.h"

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
    s << "[" << m_id << "] " << m_name << ": " << m_dnaSeq->getSeqAsString();
    return s.str();
}
