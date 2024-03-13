#include "treeOfSuppliers.h"
#include "supplier.h"
    // Helper function to insert a new node into the binary tree
    SupplierNode* SupplierTree::insert(SupplierNode* root, Supplier supplier) {
        if (root == nullptr) {
            return new SupplierNode(supplier);
        }

        if (supplier.getId() < root->value.getId()) {
            root->left = insert(root->left, supplier);
        } else if (supplier.getId() > root->value.getId()) {
            root->right = insert(root->right, supplier);
        }

        return root;
    }

    // Helper function to delete a node with a given supplierCode
    SupplierNode*  SupplierTree::deleteNode(SupplierNode* root, int code) {
        if (root == nullptr) {
            return root;
        }

        if (code < root->value.getId()) {
            root->left = deleteNode(root->left, code);
        } else if (code > root->value.getId()) {
            root->right = deleteNode(root->right, code);
        } else {
            // SupplierNode with only one child or no child
            if (root->left == nullptr) {
                SupplierNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                SupplierNode* temp = root->left;
                delete root;
                return temp;
            }

            // SupplierNode with two children: Get the inorder successor (smallest
            // in the right subtree)
            SupplierNode* temp = minValueNode(root->right);

            // Copy the inorder successor's value to this node
            root->value = temp->value;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->value.getId());
        }

        return root;
    }

    // Helper function to find the node with the minimum value
    SupplierNode*  SupplierTree::minValueNode(SupplierNode* node) {
        SupplierNode* current = node;

        // Find the leftmost leaf
        while (current->left != nullptr) {
            current = current->left;
        }

        return current;
    }

    // Helper function to find a supplier with a given supplierCode
    SupplierNode*  SupplierTree::findNode(SupplierNode* root, int code) {
        if (root == nullptr || root->value.getId() == code) {
            return root;
        }

        if (code < root->value.getId()) {
            return findNode(root->left, code);
        }

        return findNode(root->right, code);
    }

    // Helper function to perform an in-order traversal and display value
    void  SupplierTree::inOrderTraversal(SupplierNode* root)  {
        if (root != nullptr) {
            inOrderTraversal(root->left);
            root->value.putData(); // Display supplier value
            inOrderTraversal(root->right);
        }
    }

    