
#include "DNAPair.h"

DNAPair::DNAPair(SharedPtr<IDna> dna):m_dna(dna)
{
}

size_t DNAPair::get_length() const
{
    return m_dna->get_length();
}

const Nucleotide DNAPair::operator[](size_t indx) const
{
    return m_dna->operator[](indx);
}
