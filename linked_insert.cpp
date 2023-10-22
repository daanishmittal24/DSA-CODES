#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x=0){
        data=x;
        next = nullptr;
    }
};

Node *insertFront(Node *head, int value){
    Node *temp = new Node(value);
    temp->next = head;
    head=temp;
    return head;
}

Node InsertFront(Node **head, int x){
    Node *temp = new Node(x);
    temp->next = *head;
    *head=temp;
}

void print(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *num1 = new Node(20);
    Node *num2 = new Node(30);
    Node *num3 = new Node(40);

    head->next = num1;
    num1->next = num2;
    num2->next = num3;

    head=insertFront(head,5);
    print(head);

    InsertFront(&head,1);
    print(head);

}