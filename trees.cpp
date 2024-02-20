#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        left = nullptr;
        right = nullptr;
        key = k;
    }
};

void inOrder(Node* root){
    if(root!=nullptr){
    inOrder(root->left);
    cout << root->key<<" ";
    inOrder(root->right);
    }
}

void preOrder(Node* root){
    if(root!=nullptr){
    cout << root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root!=nullptr){
    postOrder(root->left);
    postOrder(root->right);
    cout << root->key<<" ";
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Inorder traversal of the tree is: ";
    inOrder(root);
    cout << endl;
    cout << "Preorder traversal of the tree is: ";
    preOrder(root);
    cout << endl;
    cout << "Postorder traversal of the tree is: ";
    postOrder(root);
    cout << endl;

    return 0;
}