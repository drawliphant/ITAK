//
// Created by drawl_000 on 4/20/2017.
//

#ifndef ITAK_DENIALOFSERVICEANALYZER_H
#define ITAK_DENIALOFSERVICEANALYZER_H
#include <fstream>
#include "Analyzer.h"
#include "ResultSet.h"

class DenialOfServiceAnalyzer: public Analyzer {
public:
    DenialOfServiceAnalyzer();
    ResultSet Run(std::istream& file);
private:
};


#endif //ITAK_DENIALOFSERVICEANALYZER_H
