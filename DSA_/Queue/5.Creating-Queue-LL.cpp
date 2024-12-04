#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val ) {
        data = val;
        next = nullptr;
    }
};

class Queue {
    Node* head;
    Node* tail;
    int size;

public:
    Queue() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    
    //insert At tail= enqueu

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            // LL is empty
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    
    //delete At head= dequeue

    void dequeue() {
        if (head == nullptr) {
            // LL is empty
            return;
        } else {
            Node* oldHead = head;
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
            delete oldHead;
            size--;
        }
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    int front() {
        if (head == nullptr) {
            return -1;
        }
        return head->data;
    }
};

int main() {
    Queue qu;

    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);

    qu.dequeue();

    qu.enqueue(40);

    while (!qu.isEmpty()) {
        cout << qu.front() << " ";
        qu.dequeue();
    }

    return 0;
}
