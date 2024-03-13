// Supplier.h
#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

using namespace std;

class Supplier {
    //TODO: add tree of spareParts
private:
    string supplierName;
    int supplierCode;
    string address;
    string telephone;
    string email;

public:
    // Constructors
    Supplier(); // Default constructor
    Supplier(string name, int code,  string addr,
              string tel,  string mail);

    // Member functions
    int getId();
    void getData(); // Input supplier details
    void putData() const; // Display supplier data
    void modifyData(); // Modify supplier information
};

#endif // SUPPLIER_H
