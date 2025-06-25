#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// Iterative Function to delete
// 'key' from the BST.
Node* delIterative(Node* root, int key)
{
    Node* curr = root;
    Node* prev = NULL;

    // Check if the key is actually present in the BST.
    // the variable prev points to the parent of the key to be deleted.
    while (curr != NULL && curr->key != key) {
        prev = curr;
        if (key < curr->key)
            curr = curr->left;
        else
            curr = curr->right;
    }

    // Key not present
    if (curr == NULL) 
        return root;

    // Check if the node to be deleted has atmost one child.
    if (curr->left == NULL || curr->right == NULL) {

        // newCurr will replace
        // the node to be deleted.
        Node* newCurr;

        // if the left child does not exist.
        if (curr->left == NULL)
            newCurr = curr->right;
        else
            newCurr = curr->left;

        // check if the node to be deleted is the root.
        if (prev == NULL)
            return newCurr;

        // check if the node to be deleted is prev's left or right child and then replace this with newCurr
        if (curr == prev->left)
            prev->left = newCurr;
        else
            prev->right = newCurr;

        // free memory of the node to be deleted.
        delete curr;
    }

    // node to be deleted has
    // two children.
    else {
        
        // Compute the inorder successor
        Node* p = NULL;
        Node* temp = curr->right;
        while (temp->left != NULL) {
            p = temp;
            temp = temp->left;
        }

        // check if the parent of the inorder
        // successor is the curr or not(i.e. curr=
        // the node which has the same data as
        // the given data by the user to be
        // deleted). if it isn't, then make the
        // the left child of its parent equal to
        // the inorder successor'd right child.
        if (p != NULL)
            p->left = temp->right;

        // if the inorder successor was the
        // curr (i.e. curr = the node which has the
        // same data as the given data by the
        // user to be deleted), then make the
        // right child of the node to be
        // deleted equal to the right child of
        // the inorder successor.
        else
            curr->right = temp->right;

        curr->key = temp->key;
        
        delete temp;
    }
    return root;
}


// Utility function to do inorder
// traversal
void inorder(Node* root)
{
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Driver code
int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    int x = 15;

    root = delIterative(root, x);
    inorder(root);
    return 0;
}
