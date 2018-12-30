#ifndef EXCELLENTEAM_ELLA_C_DNA_YIRATG_CMDFACTORY_H
#define EXCELLENTEAM_ELLA_C_DNA_YIRATG_CMDFACTORY_H

#include <map>
#include <string>
#include <vector>

using std::string;

class CmdFactory
{
public:
    static std::map<string,std::vector<string> > cmdMap;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_YIRATG_CMDFACTORY_H
