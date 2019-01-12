#include <sstream>
#include "DataCollection.h"

DataCollection::DataCollection(): inc_number (0)
{
}

void DataCollection::addDna(SharedPtr<DnaAndMetaData> d)
{
    dataByName[d->getName()]=d;
    dataById[d->getId()]=d;
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

bool DataCollection::isIDExists(size_t id)
{
    return (dataById.count(id)!=0)? true:false;
}

bool DataCollection::isNameExists(string name)
{
    return (dataByName.count(name)!=0)? true:false;
}

void DataCollection::deleteDna(const size_t id)
{
    dataByName.erase(dataById[id]->getName());
    dataById.erase(id);
}

std::string DataCollection::generateName(string name)
{
    if((!isNameExists(name)) && (name !="seq"))
        return name;
    size_t n = 1;
    std::stringstream s ;
    s << name << n;
    while(isNameExists(s.str()))
    {
        s.str("");
        s << name << ++n;
    }
    return s.str();
}

SharedPtr<DnaAndMetaData> DataCollection::getDnaById(size_t id)
{
    return dataById[id];
}

SharedPtr<DnaAndMetaData> DataCollection::getDnaByName(string name)
{
    return dataByName[name];
}

