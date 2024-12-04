#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    int ID;
    string st;
    Node* next;

    Node(int id, string s)
    {
        ID = id;
        st = s;
        next = nullptr;
    }

};

Node* addCustomer(Node* &head, int id, string s)
{
    Node* newCustomer = new Node(id,s);

    if(head == nullptr)
    {
        head = newCustomer;
        return head;
    }

    newCustomer -> next = head;
    head = newCustomer;
    return head;
}

void search(Node* head, int id)
{
    Node* temp = head;
    if(temp == nullptr)
    {
        cout <<"Not Found" <<endl;
        return;
    }

    while(temp != nullptr)
    {
        if( temp ->ID == id)
        {
            cout<< temp ->st <<endl;
            return;
        }

        temp = temp -> next;
    }

    cout <<"Not Found" <<endl;
}

int main()
{
    Node* head = nullptr;
    addCustomer(head, 1, "Maruf");
    addCustomer(head, 2, "Mahin");

    search(head, 2);



    return 0;
}