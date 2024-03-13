#include"sparePart.h"
#ifndef LISTOFSPAREPARTS_H
#define LISTOFSPAREPARTS_H

class SupplyNode {
public:
    Supplier value;
    SupplyNode* next;

    SupplyNode(){
        value=Supplier();
        next=nullptr;
    };
    SupplyNode(Supplier v){
        value=v;
        next= nullptr;
    };
};

class listOfSuppliers {
    SupplyNode* head;
int size;
public:
    listOfSuppliers();
    bool insert(Supplier value);
    bool deleteByID(int id);
    bool containsByID(int id);
};
#endif // LISTOFSPAREPARTS_H
