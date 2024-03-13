#include "treeofspareparts.h"
    // Helper function to insert a new node into the binary tree
    SparePartNode* SparePartTree::insert(SparePartNode* root, SparePart sparePart) {
        if (root == nullptr) {
            return new SparePartNode(sparePart);
        }

        if (sparePart.getId() < root->value.getId()) {
            root->left = insert(root->left, sparePart);
        } else if (sparePart.getId() > root->value.getId()) {
            root->right = insert(root->right, sparePart);
        }

        return root;
    }

    // Helper function to delete a node with a given sparePartCode
    SparePartNode*  SparePartTree::deleteNode(SparePartNode* root, int code) {
        if (root == nullptr) {
            return root;
        }

        if (code < root->value.getId()) {
            root->left = deleteNode(root->left, code);
        } else if (code > root->value.getId()) {
            root->right = deleteNode(root->right, code);
        } else {
            // SparePartNode with only one child or no child
            if (root->left == nullptr) {
                SparePartNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                SparePartNode* temp = root->left;
                delete root;
                return temp;
            }

            // SparePartNode with two children: Get the inorder successor (smallest
            // in the right subtree)
            SparePartNode* temp = minValueNode(root->right);

            // Copy the inorder successor's value to this node
            root->value = temp->value;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->value.getId());
        }

        return root;
    }

    // Helper function to find the node with the minimum value
    SparePartNode*  SparePartTree::minValueNode(SparePartNode* node) {
        SparePartNode* current = node;

        // Find the leftmost leaf
        while (current->left != nullptr) {
            current = current->left;
        }

        return current;
    }

    // Helper function to find a sparePart with a given sparePartCode
    SparePartNode*  SparePartTree::findNode(SparePartNode* root, int code) {
        if (root == nullptr || root->value.getId() == code) {
            return root;
        }

        if (code < root->value.getId()) {
            return findNode(root->left, code);
        }

        return findNode(root->right, code);
    }

    // Helper function to perform an in-order traversal and display value
    void  SparePartTree::inOrderTraversal(SparePartNode* root)  {
        if (root != nullptr) {
            inOrderTraversal(root->left);
            // root->value.putData(); // Display sparePart value
            inOrderTraversal(root->right);
        }
    }

    
