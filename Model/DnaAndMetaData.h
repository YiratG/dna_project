#ifndef DNA__DNAMETADATA_H
#define DNA__DNAMETADATA_H
#include <cstring>
#include <string>
#include "../usesLibraries/SharedPtr.h"
#include "IDna.h"

class DnaAndMetaData
{
public:
    DnaAndMetaData(size_t id, std::string name, SharedPtr<IDna> DnaSeq,char staus ='o');
    size_t getId() const;
    string getName() const;
    string getDescription()const;


private:
    size_t m_id;
    std::string m_name;
    SharedPtr<IDna> m_dnaSeq;
    char m_status;


};



#endif //DNA__DNAMETADATA_H
