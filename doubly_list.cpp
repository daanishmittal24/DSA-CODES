#include <iostream>
using namespace std;

struct Node{
    Node *next;
    Node *prev;
    int data;
    Node(int x){
        data = x;
        next = nullptr;
        prev = nullptr;
    }

};

Node *insertBegin(Node *head, int data){
   Node *temp = new Node(data);
   if(head == nullptr){
    head = temp;
    return head;
   }
   temp->next = head;
   return temp;
}

Node * insertEnd(Node *head, int data){
    Node *temp = new Node(data);
    if (head == nullptr){return temp;}
    Node *current = head;
    while (current->next!=nullptr)
    {
        current = current->next;
    }
    current->next = temp;
    temp->prev = current;
    return head;

}

Node * reverseDll(Node *head){
    if(head == nullptr || head->next == nullptr)
        return head;
    Node *prev = NULL, *current = head; 
    while (current != nullptr)
    {
        prev = current->prev;
        current->prev = current->next;
        current->next = prev;
        current = current->prev;
    }
    return prev;

}

void print(Node * head){
    Node*curr = head;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
}


int main (){
    Node *head = new Node(20);
    print(head);
    head = insertBegin(head,34);
    print(head);
     head = reverseDll(head);
     print(head);

}