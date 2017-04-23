//
// Created by drawl_000 on 4/20/2017.
//

#ifndef ITAK_CONFIGURATIONTESTER_H
#define ITAK_CONFIGURATIONTESTER_H
#include "../Configuration.h"

class ConfigurationTester {
public:

    bool run(){std::cout<<"Running Configuration Test~~~~~"<<std::endl;

        Configuration test(2);
        test.add("rate","5");
        test.add("potato","9");
        test.add("orlando","2");
        if(test.get("rate")!="5")return false;
        if(test.get("potato")!="9")return false;
        if(test.get("orlando")!="2")return false;
        return true;
    }
};


#endif //ITAK_CONFIGURATIONTESTER_H
