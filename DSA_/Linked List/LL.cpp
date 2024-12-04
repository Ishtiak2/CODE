#include<iostream>
using namespace std;

class Node
{
    public:

    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    } 
};

class LL{
    Node* head;
    LL()
    {
        head = NULL;
    }




    void insertAtHead(int data)
    {
    Node* new_node = new Node(data);
    new_node -> next = head;
    head = new_node;
    }

    void insertAtTail(int data)
    {
        Node* new_node = new Node(data);

        Node* temp = head;

        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = new_node;
    }

    void insert(int pos)
    {
        int current = 0;
        while(current != pos -1)
        {
            currenttemp
        }
        
    }

};
