#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to insert a node at the head of the doubly circular linked list
Node* insertAtHead(Node*& head, int val) {
    Node* new_node = new Node(val);
    
    if (head == nullptr) {
        // If the list is empty, new node points to itself
        new_node->next = new_node;
        new_node->prev = new_node;
        head = new_node;
        return head;
    }

    Node* tail = head->prev; // Find the tail (head->prev)

    // Update pointers to insert new_node at the head
    new_node->next = head;
    new_node->prev = tail;
    head->prev = new_node;
    tail->next = new_node;

    head = new_node; // Update head to point to the new node
    return head;
}

// Function to insert a node at the tail of the doubly circular linked list
Node* insertAtTail(Node*& head, int val) {
    Node* new_node = new Node(val);

    if (head == nullptr) {
        // If the list is empty, new node points to itself
        new_node->next = new_node;
        new_node->prev = new_node;
        head = new_node;
        return head;
    }

    Node* tail = head->prev; // Find the tail (head->prev)

    // Update pointers to insert new_node at the tail
    tail->next = new_node;
    new_node->prev = tail;
    new_node->next = head;
    head->prev = new_node;

    return head;
}

// Function to display the doubly circular linked list
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ⇔ ";
        temp = temp->next;
    } while (temp != head);

    cout << "HEAD" << endl; // Indicate circular connection
}

// Main function
int main() {
    Node* head = nullptr;

    // Insert elements at the tail
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // Display the list
    cout << "Doubly Circular Linked List: " << endl;
    display(head);

    // Insert an element at the head
    insertAtHead(head, 0);

    // Display the updated list
    cout << "After inserting at head: " << endl;
    display(head);

    return 0;
}
