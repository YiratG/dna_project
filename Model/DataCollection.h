#ifndef DNA__DATACOLLECTION_H
#define DNA__DATACOLLECTION_H


#include "../usesLibraries/SharedPtr.h"
#include "../Model/DnaAndMetaData.h"
#include <map>
#include "IDna.h"

class DataCollection
{
public:
    DataCollection();
    size_t getIncNum();
    void addDna(SharedPtr<DnaAndMetaData> d);
    bool isNameAlreadyUsed(string name);
    bool isIDAlreadyUsed(size_t id);
    void deleteDna(string name);
    void deleteDna(size_t id);
    std::string generateName(string name = "seq");

private:
    std::map<string,SharedPtr<DnaAndMetaData> >dataByName;
    std::map<size_t ,SharedPtr<DnaAndMetaData> >dataById;
    size_t inc_number;
};


#endif //DNA__DATACOLLECTION_H
