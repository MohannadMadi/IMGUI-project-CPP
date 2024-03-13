#include"supplier.h"


class SupplierNode
{
public:
    Supplier value;           // Value contained in the node
    SupplierNode*right;   // Pointer to the right child
    SupplierNode *left;    // Pointer to the left child

    // Constructor to initialize node with a value
    SupplierNode(Supplier v)
    {
        value = v;
        right = NULL; // Initialize right child to NULL
        left = NULL;  // Initialize left child to NULL
    }
};

// Define a SupplierTree class

class SupplierTree {
private:
    SupplierNode* root;

    // Helper function to insert a new node into the binary tree
 
public:
 
 
    // Constructor


   SupplierNode* insert(SupplierNode* root, Supplier supplier);

    // Helper function to delete a node with a given supplierCode
    SupplierNode* deleteNode(SupplierNode* root, int code) ;

    // Helper function to find the node with the minimum value
    SupplierNode* minValueNode(SupplierNode* node) ;

    // Helper function to find a supplier with a given supplierCode
    SupplierNode* findNode(SupplierNode* root, int code) ;
    // Helper function to perform an in-order traversal and display value
    void inOrderTraversal(SupplierNode* root) ;


};
