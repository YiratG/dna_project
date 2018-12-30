#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_DNAMETADATA_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_DNAMETADATA_H
#include <cstring>
#include <string>
#include "../usesLibraries/SharedPtr.h"
#include "IDna.h"

class DnaMetaData
{
private:
    size_t m_id;
    std::string m_name;
    char m_status;
    SharedPtr<IDna> m_dnaSeq;

};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_DNAMETADATA_H
