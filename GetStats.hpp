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

    int* getStats() const{
        int* returnArray = new int[3];
        if (head == nullptr) {
            returnArray[0] = 0;
            returnArray[1] = 0;
            returnArray[2] = 0;
            return returnArray;
        }

        Node* tracker = head;
        int min = head->data;
        int max = head->data;
        int total = 0;
        int num = 0;
        while (tracker != nullptr) {
            if (tracker->data > max) {
                max = tracker->data;
            }
            if (tracker->data < min) {
                min = tracker->data;
            }
            total += tracker->data;
            num++;
            tracker = tracker->next;
        }
        returnArray[0] = min;
        returnArray[1] = max;
        returnArray[2] = total / num;
        return returnArray;
    }
    

private:
    Node* head = nullptr;
};
