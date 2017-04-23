//
// Created by drawl_000 on 4/19/2017.
//

#ifndef ITAK_KEYVALUE_H
#define ITAK_KEYVALUE_H
template <class k,class v>
class KeyValue{
public:
    KeyValue(){}
    KeyValue(k kay,v val){
        key=kay;
        value=val;
    }

    KeyValue(KeyValue &other){
        key=other.getKey();
        value=other.getValue();
    }
    bool operator==(const KeyValue other);
    k getKey(){
        return key;
    }
    v getValue(){
        return value;
    }
    void setValue(v val){
        value=val;
    }
    v value;
private:
    k key;

};

#endif //ITAK_KEYVALUE_H
