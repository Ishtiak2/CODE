#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val)
{
    Node* new_node= new Node(val);
    new_node->next= head;
    head=new_node;
}

void insertAtTail(Node* &head,int val)
{
    Node* new_node= new Node(val);
    
    Node* temp= head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    //temp has reached the last node
    temp->next=new_node;
    //we do not need to set the new nodes next into null as it is already done by the function"Node(int data)"
}

void insertAtPosition(Node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node= new Node(val);
    Node* temp=head;
    int current_pos=0;
    
    while(current_pos != pos-1){
        temp=temp->next;
        current_pos++;
    }
    //temp is pointing to node at pos-1
    
    new_node->next=temp->next;
    temp->next= new_node;
}

void updateAtPosition(Node* &head,int val,int pos )
{
    if(pos==0){
        head->val=val;
        return;
    }
    
    Node* temp=head;
    
    int current_pos=0;
    while(current_pos!=pos){
        temp=temp->next;
        current_pos++;
    }
    temp->val=val;
}

void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
}

void deleteAtTail(Node* &head){
    Node* temp=head;
    
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    
    Node* temp1= temp->next; //Node that should be free.not mandatory
    
    temp->next=NULL;
    free(temp1); // freeing the temp is not mandatory
}

void deleteAtPosition(Node* &head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    
    Node* prev=head;
    
    int curr_pos=0;
    while(curr_pos != pos-1){
        prev=prev->next;
        curr_pos++;
    }
    //prev is pointing to pos-1
    Node* temp=prev->next;  //prev->next=pos.we need to free this node
    prev->next= prev->next->next;
    free(temp);
    
}
void display(Node* &head)
{
    Node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    Node* head=NULL;
    int val=2;
    int pos;
    
    insertAtHead(head,val);
    display(head);
    val=1;
    
    insertAtHead(head,val);
    display(head); 
    
    val=3;
    insertAtTail(head,val);
    display(head);
    
    val=4;
    pos=2;
    insertAtPosition(head,val,pos);
    display(head);
    
    pos=2;
    val=5;
    updateAtPosition(head,val,pos);
    display(head); 
    
    /*
    deleteAtHead(head);
    display(head);
    
    deleteAtTail(head);
    display(head);
    */
    pos=1;
    deleteAtPosition(head,pos);
    display(head);
    
    
    return 0;
}
