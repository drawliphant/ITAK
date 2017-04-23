//
// Created by drawl_000 on 4/19/2017.
//
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <fstream>

#include "ResultSet.h"
#include "Configuration.h"

#ifndef ITAK_ANALYZER_H
#define ITAK_ANALYZER_H

class Analyzer {
public:
    Analyzer():result(0) {}
    virtual ResultSet Run(std::istream& file) = 0;
    Configuration config =Configuration(1);
protected:

    ResultSet result;

};


#endif //ITAK_ANALYZER_H
