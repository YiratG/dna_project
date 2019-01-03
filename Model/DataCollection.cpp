#include <sstream>
#include "DataCollection.h"

DataCollection::DataCollection(): inc_number (0)
{
}

void DataCollection::addDna(SharedPtr<DnaAndMetaData> d)
{
    dataByName[d->getName()]=d;
    dataById[d->getId()]=d;
//    dataByName.insert(std::pair<std::string,SharedPtr<DnaAndMetaData> >(d->getName(),d));
}

size_t DataCollection::getIncNum()
{
    return ++inc_number;
}

void DataCollection::deleteDna(string name)
{
//    dataById.erase(dataById[name]->getId());
//    dataById.erase(id);
}

bool DataCollection::isIDAlreadyUsed(size_t id)
{
    return dataById.count(id)? true:false;
}

bool DataCollection::isNameAlreadyUsed(string name)
{
    return dataByName.count(name)? true:false;
}

void DataCollection::deleteDna(const size_t id)
{
    dataByName.erase(dataById[id]->getName());
    dataById.erase(id);
}

std::string DataCollection::generateName(string name)
{
    if((!isNameAlreadyUsed(name)) && (name !="seq"))
        return name;
    size_t n = 1;
    std::stringstream s ;
    s << name << n;
    while(isNameAlreadyUsed(s.str()))
    {
        s.str("");
        s << name << ++n;
    }
    return s.str();
}

