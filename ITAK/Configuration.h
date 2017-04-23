//
// Created by drawl_000 on 4/20/2017.
//
#include <string>
#include "Dictionary.h"

#ifndef ITAK_CONFIGURATION_H
#define ITAK_CONFIGURATION_H


class Configuration {

public:
    Configuration(int i){
        conf=Dictionary<std::string,std::string>(i);
    }
    Configuration(const Configuration& o){
        conf=o.conf;
    }
    void add(std::string key,std::string value){conf.add(key,value);}
    std::string get(std::string key){return conf.getByKey(key).getKey();}
    void set(std::string key,std::string val){conf.getByKey(key).setValue(val);}
private:
    Dictionary<std::string,std::string> conf;


};


#endif //ITAK_CONFIGURATION_H
