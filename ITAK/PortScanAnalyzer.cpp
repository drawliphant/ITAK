//
// Created by drawl_000 on 4/20/2017.
//

#include "PortScanAnalyzer.h"
PortScanAnalyzer::PortScanAnalyzer(){
    config.add("results","0");
    config.add("timeframe","10000");
    config.add("likelyThreshold","10000");
    config.add("possibleThreshold","20000");
}
ResultSet PortScanAnalyzer::Run(std::istream& file){
    ResultSet res(3);
    res.add("Likely Attackers");
    res.add("Possible Attackers");
    res.add("Port Count");


    res.print();
    return result;
}