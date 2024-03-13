#include "sparePart.h"
#include <iostream>
using namespace std;
// Default constructor
SparePart::SparePart() : cost(0.0), existingParts(0) {}

int SparePart::getId(){
    return partNumber;
}
// Function to input spare part details
void SparePart::getData(string Name,int Number,float Cost,int Parts)
{

    partName=Name;
     partNumber=Number;
    cost=Cost;
    existingParts=Parts;
}

// Function to display spare part data
void SparePart::putData(
)
{
 }

// Function to modify spare part information
void SparePart::modifyData()
{
}

