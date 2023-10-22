//
// Created by daanish on 10/1/23.
//
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void printList(Node*head){
    if (head == nullptr) return;

    Node*p = head;
    while (p->next!=head){
        cout << (p->data) << " ";
        p = p->next;
    }
    cout << p->data;
}

void insertatend()

int main(){
    Node*head = new Node(20);
    Node* temp=new Node(30);
    head->next=temp;
    temp->next=head;
    printList(head);
}