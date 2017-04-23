//
// Created by drawl_000 on 4/20/2017.
//

#ifndef ITAK_RESULTSETTESTER_H
#define ITAK_RESULTSETTESTER_H
#include <iostream>
#include "../ResultSet.h"

class ResultSetTester {
public:


    void run(){
        std::cout<<"Running ResultSet Test~~~~~"<<std::endl;
        ResultSet res(2);
        res.add("Threats");
        res.increment("Threats","Doliphins");
        res.increment("Threats","Ducks");
        res.add("Bros");
        res.increment("Bros","Rare Puppers");
        res.increment("Bros","Jim from accounting");
        res.print();
    }
};


#endif //ITAK_RESULTSETTESTER_H
