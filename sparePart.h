#include"treeOfSuppliers.h"

#ifndef SPAREPART_H
#define SPAREPART_H

#include <string>
using namespace std;
class SparePart
{
    //TODO: add tree of suppliers
private:

    string partName;
    int partNumber;
    float cost;
    int existingParts;
SupplierTree tree;

public:
    SparePart();
    int getId();

    void getData(string Name,int Number,float Cost,int Parts
);
    void putData();
    void modifyData();
};

#endif // SPAREPART_H
