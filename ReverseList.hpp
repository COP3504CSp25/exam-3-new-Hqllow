#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        LinkedList reversedList;
        if (head == nullptr) {
            return reversedList;
        }
        if (head->next == nullptr) {
            reversedList.addHead(head->data);
            return reversedList;
        }
        Node* tracker = head;
        while (tracker != nullptr) {
            reversedList.addHead(tracker->data);
            tracker = tracker->next;
        }
        return reversedList;
    }

    Node* head = nullptr;
};
