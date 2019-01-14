#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_DNAPAIR_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_DNAPAIR_H


#include "../usesLibraries/SharedPtr.h"
#include "IDna.h"

class DNAPair: public IDna
{
public:
    DNAPair(SharedPtr<IDna> dna);
    const Nucleotide operator [] (size_t indx) const;
    size_t get_length() const;
private:
    SharedPtr<IDna> m_dna;

};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_DNAPAIR_H
