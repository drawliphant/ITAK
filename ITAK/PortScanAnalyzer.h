//
// Created by drawl_000 on 4/21/2017.
//

#ifndef ITAK_PORTSCANANALYZER_H
#define ITAK_PORTSCANANALYZER_H
#include "Analyzer.h"


class PortScanAnalyzer:public Analyzer {
public:
    PortScanAnalyzer();
    ResultSet Run(std::istream &file);
private:
};


#endif //ITAK_PORTSCANANALYZER_H
