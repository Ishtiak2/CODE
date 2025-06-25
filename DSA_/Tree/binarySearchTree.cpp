#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }

    ~Node(){
        delete left;
        delete right;
    }
};

void insert(Node* &root,int val){
    Node* node = new Node(val);

    if(root == nullptr){
        root = node;
        return;
    }

    Node* r = nullptr;
    Node* temp = root;

    while(temp != nullptr){
        r = temp;

        if(val == temp->data){
            return;
        }

        if(val < temp -> data){
            temp = temp -> left;
        }

        else{
            temp = temp -> right;
        }
    }

    if(r -> data > val){
        r->left = node;
    }

    else{
        r -> right = node;
    }
    
}

void print(Node* root){
    if(root == nullptr){
        return;
    }
    print(root -> left);
    cout<<root->data<<" ";
    print(root ->right);

}

bool search(Node* root, int key){
    while(root!=nullptr){
        if(root -> data == key){
            return 1;
        }

        else if(root -> data < key){
            root = root -> right;
        }

        else{
            root= root -> left;
        }
    }

    return 0;
}

int main(){
    Node* root = nullptr;
    
    insert(root,6);
    insert(root,3);
    insert(root,8);
    insert(root,1);
    insert(root,4);
    cout<<"Available: "<<search(root,9)<<endl;

    print(root);

}