// Supplier.cpp
#include "Supplier.h"
using namespace std;

// Default constructor
Supplier::Supplier() {
    // Initialize data members to default values
    supplierName = "";
    supplierCode = -1;
    address = "";
    telephone = "";
    email = "";
}

// Parameterized constructor
Supplier::Supplier( string name, int code,
                   string addr, string tel,
                   string mail) {
    supplierName = name;
    supplierCode = code;
    address = addr;
    telephone = tel;
    email = mail;
}

int Supplier::getId(){
    return supplierCode;
}
// Input supplier details
void Supplier::getData() {

}

// Display supplier data
void Supplier::putData() const {
}

// Modify supplier information
void Supplier::modifyData() {getData(); // Reuse the getData function to get modified information
}
