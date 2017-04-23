//
// Created by drawl_000 on 4/20/2017.
//

#ifndef ITAK_RESULTSET_H
#define ITAK_RESULTSET_H
#include <string>
#include <vector>
#include "Dictionary.h"

class ResultSet {
public:
    ResultSet(int i){
        result=Dictionary<std::string,std::vector<std::string>>(i);
    }
    void add(std::string k){
        result.add(k,std::vector<std::string>(0));
    }

    void increment(std::string key,std::string value){

        int hold=result.getLocByKey(key);
        result[hold].value.push_back(value);

    }
    std::vector<std::string> get(std::string){

    }
    void print(){
        int go=result.getCount();
        for(int i=0;i<go;i++){
            std::cout<<std::endl;
            std::cout<<result[i].getKey()<<" : ";
            for(int j=0;j<result[i].value.size();i++){
                std::cout<<result[i].value[j]<<" ";
            }
        }
    }
private:
    Dictionary<std::string,std::vector<std::string>> result;
};


#endif //ITAK_RESULTSET_H
