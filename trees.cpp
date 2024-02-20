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

int main(){

    return 0;
}