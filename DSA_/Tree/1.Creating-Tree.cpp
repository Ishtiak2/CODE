#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left, *right;

  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// Preorder traversal
void preorderTraversal(Node* node) {
  if (node == NULL)
    return;

  cout << node->data << "->";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

// Postorder traversal
void postorderTraversal(Node* node) {
  if (node == NULL)
    return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << "->";
}

// Inorder traversal
void inorderTraversal(Node* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << "->";
  inorderTraversal(node->right);
}

int height(Node* node) {
    int l=0;
    int r=0;

    if(node == nullptr) {
        return 0;
    }

    l= height(node->left);
    r= height(node->right);

    if(l > r) {
        return l+1;
    }

    else {
        return r+1;
    }
}
int count(Node* root) {
    if(root) {
        return count(root->left)+count(root->right)+1;
    }
    return 0;
}

void levelOrderTraversal(Node* root,int x) {
    int y=0;

    while(y != x) {
        if(y % 2 )
        y++;
    }
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);

  cout << "Inorder traversal: ";
  inorderTraversal(root);
  cout<<endl;

  //cout << "\nPreorder traversal: ";
  //preorderTraversal(root);

  //cout << "\nPostorder traversal: ";
  //postorderTraversal(root);

  cout<<count(root)<<endl;

  return 0;
}
