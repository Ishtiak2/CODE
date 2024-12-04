#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a node
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

void insert(Node* &root, int x)
{
    Node* temp = root;
    Node* r = nullptr;

    Node* node = new Node(x);

    while(temp != nullptr)
    {
        r = temp;

        if(temp ->data > x)
        {
            temp = temp -> left;
        }

        else if(temp -> data < x)
            temp = temp -> right;

        else
            return;    

    }

    if(r -> data > x)
        r -> left = node;

    else r -> right = node;    
}

// Preorder traversal function
void preorder(Node* root)
{
    if (root == nullptr)
        return; // Base case

    cout << root->data << " -> ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal function
void inorder(Node* root)
{
    if (root == nullptr)
        return; // Base case

    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
}

int main()
{
    // Create the tree
    Node* root = new Node(1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);

    inorder(root);

    return 0;
}
