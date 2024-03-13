#include"sparepart.h"


class SparePartNode
{
public:
    SparePart value;           // Value contained in the node
    SparePartNode*right;   // Pointer to the right child
    SparePartNode *left;    // Pointer to the left child

    // Constructor to initialize node with a value
    SparePartNode(SparePart v)
    {
        value = v;
        right = NULL; // Initialize right child to NULL
        left = NULL;  // Initialize left child to NULL
    }
};

// Define a SupplierTree class

class SparePartTree {
private:
    SparePartNode* root;

    // Helper function to insert a new node into the binary tree
 
public:
 
 
    // Constructor


   SparePartNode* insert(SparePartNode* root, SparePart sparePart);

    // Helper function to delete a node with a given supplierCode
    SparePartNode* deleteNode(SparePartNode* root, int code) ;

    // Helper function to find the node with the minimum value
    SparePartNode* minValueNode(SparePartNode* node) ;

    // Helper function to find a sparePart with a given supplierCode
    SparePartNode* findNode(SparePartNode* root, int code) ;
    // Helper function to perform an in-order traversal and display value
    void inOrderTraversal(SparePartNode* root) ;


};
