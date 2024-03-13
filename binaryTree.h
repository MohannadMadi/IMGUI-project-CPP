#ifndef RELATION_TREE_H
#define RELATION_TREE_H

#include <iostream>

// class for Tree Node

template <typename T>
class TNode
{
public:
    T value;           // Value contained in the node
    TNode*Right;   // Pointer to the right child
    TNode *Left;    // Pointer to the left child

    // Constructor to initialize node with a value
    TNode(T v)
    {
        value = v;
        Right = NULL; // Initialize right child to NULL
        Left = NULL;  // Initialize left child to NULL
    }
};

// Template class for Binary Search Tree

template <typename T>
class binaryTree
{
public:
    TNode<T> *root; // Pointer to the root of the tree
    int Size;       // Number of nodes in the tree

    // Constructor to initialize an empty tree
    binaryTree();

    // Method to insert a new value into the tree
    TNode <T>*insert(TNode<T> *&root,  int v); // Declaration

    // Method to search for a value in the tree
    bool search(TNode<T>*root, int v); // Declaration


    // Method to find the minimum value in the tree
    int minValue(TNode <T>*root);

    // Method to find the maximum value in the tree
    int maxValue(TNode<T> *root);

    // Method to delete a value from the tree
    TNode <T>*_delete(TNode<T>*root, int v); // Declaration

    // Method to perform an in-order traversal of the tree
    void inorder(TNode<T> *root); // Declaration

    // Method to perform a pre-order traversal of the tree
    void preorder(TNode <T>*root); // Declaration

    // Method to perform a post-order traversal of the tree
    void postorder(TNode <T>*root); // Declaration
};

#endif // RELATION_TREE_H
