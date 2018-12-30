#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_DATACOLLECTION_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_DATACOLLECTION_H


#include "../usesLibraries/SharedPtr.h"
#include "IDna.h"

class DataCollection
{
public:
    void addDna(SharedPtr<IDna> d);
private:
    SharedPtr<IDna> *col;

};


#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_DATACOLLECTION_H
