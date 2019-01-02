
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
    return dataByName.count(name);
}

void DataCollection::deleteDna(const size_t id)
{
    dataByName.erase(dataById[id]->getName());
    dataById.erase(id);
}
