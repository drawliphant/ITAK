#include <iostream>
#include <fstream>

#include "Analyzer.h"
#include "PortScanAnalyzer.h"
#include "DenialOfServiceAnalyzer.h"

using namespace std;
int main() {

    PortScanAnalyzer ps;
    ps.config.set("results","100");
    ps.config.set("timeframe","400");
    ps.config.set("likelyThreshold","1000");
    ps.config.set("possibleThreshold","2000");
    fstream data("SampleData.csv");
    ps.Run(data);
    DenialOfServiceAnalyzer ddos;
    ddos.config.set("likely Attack Port Count","1");
    ddos.config.set("possible Attack Port Count","4");
    ddos.config.set("likelyThreshold","500");
    ddos.config.set("possibleThreshold","1000");
    ddos.Run(data);
    return 0;
}