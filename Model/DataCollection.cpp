
#include "DataCollection.h"

void DataCollection::addDna(SharedPtr<DnaAndMetaData> d)
{
//    dataByName.insert()
    inc_number++;
}

DataCollection::DataCollection()
{
    inc_number = 0;
}

size_t DataCollection::getIncNum()
{
    return inc_number;
}

void DataCollection::deleteDna(string name)
{

}

bool DataCollection::isIDAlreadyUsed(size_t id)
{
    return false;
}

bool DataCollection::isNameAlreadyUsed(string name)
{
    return false;
}

void DataCollection::deleteDna(size_t id)
{

}
