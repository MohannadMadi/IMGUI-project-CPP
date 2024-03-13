#include"sparePart.h"
#ifndef LISTOFSPAREPARTS_H
#define LISTOFSPAREPARTS_H

class SpareNode {
public:
    SparePart value;
    SpareNode* next;

    SpareNode(){
        value=SparePart();
        next=nullptr;
    };
    SpareNode(SparePart v){
        value=v;
        next= nullptr;
    };
};

class listOfSpareParts {
    SpareNode* head;
    int size=0;

public:
    listOfSpareParts();
    bool insert(SparePart value);
    bool deleteByID(int id);
    bool containsByID(int id);
};
#endif // LISTOFSPAREPARTS_H
