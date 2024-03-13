#include"listOfSpareParts.h"
#include <iostream>


// listOfSpareParts Class

listOfSpareParts::listOfSpareParts() :head(nullptr) {}
bool listOfSpareParts::insert(SparePart value) {
    if(size<100){
        size++;
        SpareNode* newNode = new SpareNode(value);

        if (head == nullptr) {
            head = newNode;
            return true;
        }

        SpareNode* tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }

        tmp->next = newNode;
        // std::cout << value << " is added to the list" << std::endl;
        return true;}
        else{
            return false;
        }
    }
    bool listOfSpareParts::deleteByID(int id) {
        if (!head) {
            // Empty list, nothing to delete
            return false;
        }

        // Check if the node to be deleted is the head
        if (head->value.getId()== id) {
            SpareNode* temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        // Traverse the list to find the node to be deleted
        SpareNode* current = head;
        SpareNode* previous = nullptr;

        while (current && current->value.getId()!= id) {
            previous = current;
            current = current->next;
        }

        if (current) {
            // Node found, unlink and delete it
            if (previous) {
                previous->next = current->next;
                delete current;
                return true;
            }
            else {
                // Handle the case where previous is null
                // This could occur if the node to be deleted is not found in the list
                // You might want to print an error message or handle it appropriately based on your requirements.
                return false;
            }

            delete current;
            return true;
        }

        // Node with the specified value not found
        return false;
    }

bool listOfSpareParts::containsByID(int id){

        SpareNode* current = head;
        while (current != nullptr) {
            if (current->value.getId()== id) {
                return true;  // Key found in the list
            }
            current = current->next;
        }
        return false;  // Key not found in the list
}



 