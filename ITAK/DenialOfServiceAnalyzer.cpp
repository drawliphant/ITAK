//
// Created by drawl_000 on 4/20/2017.
//

#include "DenialOfServiceAnalyzer.h"
DenialOfServiceAnalyzer::DenialOfServiceAnalyzer(){
    config.add("likely Attack Port Count","0");
    config.add("possible Attack Port Count","0");
    config.add("likelyThreshold","10000");
    config.add("possibleThreshold","20000");
}
ResultSet DenialOfServiceAnalyzer::Run(std::istream& data){
    ResultSet res(4);
    res.add("Likely Attackers");
    res.add("Possible Attackers");
    res.add("Attack Periods");
    res.add("Timeframe");

    res.print();
    return result;
}