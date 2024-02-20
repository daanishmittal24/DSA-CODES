//
// Created by Daanish Mittal on 16-11-2023.
//
#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
    node(int data){
        left = nullptr;
        right = nullptr;
        this->data = data;
    }
};

void PreOrder(struct node*temp){
    if (temp != nullptr){
        PreOrder(temp->left);
        cout << " " << temp->data;
        
    }
}



int main(){
    
}